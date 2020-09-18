#ifndef _16_28_DELETE_H
#define _16_28_DELETE_H

class Delete {
public:
	template<typename T>
	auto operator() (T *p) const
	{
		delete p;
	}
};

#endif
