#ifndef _16_16_H
#define _16_16_H
#include <memory>
#include <initializer_list>

template<typename T> class Vec {
public:
	Vec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
	Vec(std::initializer_list<T> l);
	Vec(const Vec& v);
	Vec& operator=(const Vec& rhs);
	~Vec();
	void push_back(const T& t);
	std::size_t size() const { return first_free - elements; }
	std::size_t capacity() const { return cap - elements; }
	T* begin() const { return elements; }
	T* end() const { return first_free; }
	void reserve(std::size_t new_cap);
	void resize(std::size_t count);
	void resize(std::size_t count, const T& t);
private:
	std::allocator<T> alloc;
	T *elements;
	T *first_free;
	T *cap;
	void free();
	void reallocate();
	void chk_n_alloc() { if(size() == capacity()) reallocate(); }
	void wy_alloc_n_move(std::size_t n);
	std::pair<T*, T*> alloc_n_copy(T* b, T* a);
};

template<typename T>
Vec<T>::Vec(std::initializer_list<T> l)
{
	T* const newData = alloc.alocate(l.size());
	T* p = newData;
	for(const auto &t : l)
		alloc.construct(p++, t);
	elements = newData;
	first_free = cap = element + l.size();
}

template<typename T>
Vec<T>::Vec<const Vec<T>& v>
{
	std::pair<T*, T*> newData = alloc_n_copy(v.begin(), v.end());
	elements = newData.first;
	first_free = cap = newData.second;
}

template<typename T>
Vec<T>& Vec<T>::operator=(const Vec& rhs)
{
	std::pair<T*, T*> newData = alloc_n_copy(v.begin(), v.end());
	free();
	elements = newData.first;
	first_free = cap = newData.second;
	return *this;
}

template<typename T>
Vec<T>::~Vec()
{
	free();
}

template<typename T>
void Vec<T>::push_back(const T &t)
{
	chk_n_alloc();
	alloc.construct(first_free++, t);
}

template<typename T>
void Vec<T>::reserve(std::size_t n)
{
	if(n <= capacity()) return;
	wy_alloc_n_move(n);
}

template<typename T>
void Vec<T>::resize(td::size_t n)
{
	resize(n, T());
}

template<typename T>
void Vec<T>::resize(td::size_t n)
{
	resize(n, T());
}




