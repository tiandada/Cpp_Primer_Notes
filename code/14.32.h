#ifndef _14_32_H
#define _14_32_H

class StrBlobPtr;

class StrBlobPtr_pointer {
public:
	StrBlobPtr_pointer() = default;
	StrBlobPtr_pointer(StrBlobPtr *p) : pointer(p) { }
	StrBlobPtr& operator*() const;
	StrBlobPtr* operator->() const;
private:
	StrBlobPtr* pointer = nullptr;
};

#endif
