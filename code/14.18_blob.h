#ifndef _14_18_BLOB_H
#define _14_18_BLOB_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <stdexcept>

class StrBlobPtr;
class ConstStrBlobPtr;

class StrBlob {
    using size_type = std::vector<std::string>::size_type;
    friend class ConstStrBlobPtr;
    friend class StrBlobPtr;
    friend bool operator==(const StrBlob&, const StrBlob&);
    friend bool operator!=(const StrBlob&, const StrBlob&);
	friend bool operator< (const StrBlob&, const StrBlob&);
	friend bool operator> (const StrBlob&, const StrBlob&);
public:

    StrBlobPtr begin();
    StrBlobPtr end();

    ConstStrBlobPtr cbegin() const; 
    ConstStrBlobPtr cend() const; 

    StrBlob() : data(std::make_shared<std::vector<std::string>>()) { }
    StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>(il)) { }
    StrBlob(const StrBlob &sb) : data(std::make_shared<std::vector<std::string>>(*sb.data)) { } 
    StrBlob& operator=(const StrBlob&);
    StrBlob(StrBlob &&rhs) noexcept : data(std::move(rhs.data)) { } 
    StrBlob& operator=(StrBlob &&) noexcept;

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back()
    {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }

    std::string& front()
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    std::string& back()
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }
    const std::string& front() const
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const std::string& back() const
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }
private:
    void check(size_type i, const std::string& msg) const
    {
        if(i >= data->size()) throw std::out_of_range(msg);
    }
private:
    std::shared_ptr<std::vector<std::string>> data;
};

bool operator==(const StrBlob&, const StrBlob&);
bool operator!=(const StrBlob&, const StrBlob&);
bool operator< (const StrBlob&, const StrBlob&);
bool operator> (const StrBlob&, const StrBlob&);



class StrBlobPtr {
	friend bool operator==(const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator!=(const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator< (const StrBlobPtr&, const StrBlobPtr&);
	friend bool operator> (const StrBlobPtr&, const StrBlobPtr&);
public:
	StrBlobPtr() : curr(0) { }
    	StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) { }

    	std::string& deref() const;
    	StrBlobPtr& incr();
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t i, const std::string& msg) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    size_t curr;
};

bool operator==(const StrBlobPtr&, const StrBlobPtr&);
bool operator!=(const StrBlobPtr&, const StrBlobPtr&);
bool operator< (const StrBlobPtr&, const StrBlobPtr&);
bool operator> (const StrBlobPtr&, const StrBlobPtr&);


inline std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const
{
    auto ret = wptr.lock();
    if(!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if(i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}
inline std::string& StrBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}
inline StrBlobPtr& StrBlobPtr::incr()
{
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}


class ConstStrBlobPtr {
	friend bool operator==(const ConstStrBlobPtr&, const ConstStrBlobPtr&);
	friend bool operator!=(const ConstStrBlobPtr&, const ConstStrBlobPtr&);
	friend bool operator< (const ConstStrBlobPtr&, const ConstStrBlobPtr&);
	friend bool operator> (const ConstStrBlobPtr&, const ConstStrBlobPtr&);
public:
    ConstStrBlobPtr() : curr(0) { }
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) { }
    bool operator!=(ConstStrBlobPtr &p){ return p.curr != curr; }
    const std::string& deref() const
    {
        auto p = check(0, "dereference past end");
        return (*p)[curr];
    }
    ConstStrBlobPtr& incr()
    {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }
private:
    std::shared_ptr<std::vector<std::string>> check(size_t i, const std::string &msg) const
    {
        auto ret = wptr.lock();
        if(!ret)
            throw std::runtime_error("unbound ConstStrBlobPtr");
        if(i >= ret->size())
            throw std::out_of_range(msg);
        return ret;
    }
    std::weak_ptr<std::vector<std::string>> wptr;
    size_t curr;
};

bool operator==(ConstStrBlobPtr&, ConstStrBlobPtr&);
bool operator!=(ConstStrBlobPtr&, ConstStrBlobPtr&);
bool operator< (ConstStrBlobPtr&, ConstStrBlobPtr&);
bool operator> (ConstStrBlobPtr&, ConstStrBlobPtr&);



#endif
