#ifndef _16_58_STRVEC_H
#define _16_58_STRVEC_H
#include <string>
#include <memory>

class StrVec {
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
    StrVec(std::initializer_list<std::string> l);
    StrVec(const StrVec&);
    StrVec &operator=(const StrVec&);
    ~StrVec();

    void push_back(const std::string&);

    template<typename... Args>
    void emplace_back(Args&&...);

    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }

    void reserve(size_t new_cap);
    void resize(size_t count);
    void resize(size_t count, const std::string&);
private:
    std::allocator<std::string> alloc;
    void chk_n_alloc()
    { if(size() == capacity()) reallocate(); }
    std::pair<std::string*, std::string*> alloc_n_copy (const std::string*, const std::string*);
    void free();
    void reallocate();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
    void wy_alloc_n_move(std::size_t n);
};

template<typename... Args>
inline void
StrVec::emplace_back(Args&&... args)
{
	chk_n_alloc();
	alloc.construct(first_free++, std::forward<Args>(args)...);
}

#endif
