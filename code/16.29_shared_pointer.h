#ifndef _16_29_SHARED_H
#define _16_29_SHARED_H
#include "16.21.h"
#include <functional>
#include <memory>

template<typename> class shared_pointer;
template<typename T> void swap(shared_pointer<T>& lhs, shared_pointer<T> &rhs);

template<typename T>
class shared_pointer {
	friend void ::swap<T>(shared_pointer<T> &lhs, shared_pointer<T> &rhs);
public:
	shared_pointer() = default;
	explicit shared_pointer(T *up, std::function<void(T*)> d = DebugDelete()) : ptr(up), refCount(new std::size_t(1)), deleter(d) { }
	explicit shared_pointer(std::shared_ptr<T> &&sp, std::function<void(T*)> d = DebugDelete());
	shared_pointer(const shared_pointer &sp) : ptr(sp.ptr), refCount(sp.refCount), deleter(sp.deleter) { ++*refCount; }
	shared_pointer(shared_pointer &&sp) noexcept;
	shared_pointer& operator=(const shared_pointer &rhs);
	shared_pointer& operator =(shared_pointer &&rhs) noexcept;
	operator bool() const { return ptr ? true : false; }
	T& operator* () const { return *ptr; }
	T* operator->() const { return &this->operator*(); }
	std::size_t use_count() const { return *refCount; }
	T* get() const noexcept { return ptr; }
	bool uniqeu() const noexcept { return *refCount == 1; }
	void swap(shared_pointer &rhs) { ::swap(*this, rhs); }
	void reset() noexcept { decrement_n_destroy(); }
	void reset(T *p);
	void reset(T *p, const std::function<void(T*)> &d) { reset(p); deleter = d; }
	~shared_pointer()
	{
		decrement_n_destroy();
	}
private:
	T* ptr = nullptr;
	std::size_t *refCount = new std::size_t(0);
	std::function<void(T*)> deleter{ DebugDelete() };
	void decrement_n_destroy();
};

template<typename T>
inline void swap(shared_pointer<T> &lhs, shared_pointer<T> &rhs)
{
        using std::swap;
	swap(lhs.ptr, rhs.ptr);
	swap(lhs.refCount, rhs.refCount);
	swap(lhs.deleter, rhs.deleter);
}

template<typename T>
inline shared_pointer<T>::shared_pointer(std::shared_ptr<T> &&sp, std::function<void(T*)> d)
{
	if(sp.unique())
		*this = shared_pointer(new T(*sp), d);
	else
		throw std::runtime_error
			("only unique and rvalue reference can transfer\n");
}

template<typename T>
inline shared_pointer<T>::shared_pointer(shared_pointer &&sp) noexcept : ptr(sp.ptr), refCount(sp.refCount), deleter(std::move(sp.deleter))
{
	sp.ptr = nullptr;
	sp.refCount = nullptr;
}

template<typename T>
inline shared_pointer<T> &shared_pointer<T>::operator=(const shared_pointer &rhs)
{
	++*rhs.ref_count;
	decrement_n_destroy();
	ptr = rhs.ptr;
	refCount = rhs.refCount;
	deleter = rhs.deleter;
	return *this;
}

template<typename T>
inline shared_pointer<T> &
shared_pointer<T>::operator=(shared_pointer &&rhs) noexcept
{
	decrement_n_destroy();
	::swap(*this, rhs);
	std::cout << "shared_pointer::move=\n";
	return *this;

}

template<typename T>
inline void shared_pointer<T>::reset(T *p)
{
	if(ptr != p)
	{
		decrement_n_destroy();
		ptr = p;
		refCount = new std::size_t(1);
	}
}

template<typename T>
inline void shared_pointer<T>::decrement_n_destroy()
{
	if(ptr)
	{
		if(--*refCount == 0)
		{
			delete refCount;
			deleter(ptr);
		}
		refCount = nullptr;
		ptr = nullptr;
	}
}

#endif
