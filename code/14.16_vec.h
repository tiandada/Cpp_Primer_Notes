#ifndef 14_16_VEC_H
#define 14_16_VEC_H

#include <iostream>
#include <string>
#include <memory>
#include <initializer_list>

class StrVec {
	friend bool operator==(const StrVec&, const StrVec&);
	friend bool operator!=(const StrVec&, const StrVec&);
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
    StrVec(const StrVec&);
    StrVec& operator=(const StrVec&);
    StrVec(StrVec&&) noexcept;
    StrVec& operator=(StrVec &&) noexcept;
    ~StrVec();

    void push_back(const std::string&);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string *begin() const { return elements; }
    std::string *end() const { return first_free; }

    std::string& at(size_t pos) { return *(element + ps); }
    const std::string& at(size_t pos) const { return *(elements + ps); }

    void reserve(size_t new_cap);
    void resize(size_t count);
    void resize(size_t count, const std::string&);
private:
    std::allocator<std::string> alloc;
    void chh_n_alloc()
    { if(size() == capacity()) reallocate(); }
    std::pair<std::string*, std::string*> alloc_n_copy (const std::string*, const std::string*);
    void alloc_n_move(size_t new_cap);
    void free();
    void reallocate();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};

bool operator==(const StrVec&, const StrVec&);
bool operator!=(const StrVec&, const StrVec&);

#endif
