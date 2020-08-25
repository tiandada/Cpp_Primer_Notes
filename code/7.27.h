#ifndef _7_27_H
#define _7_27_H

#include <iostream>
#include <string>

using std::cout;
using std::string;

class Screen {
public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }

	//inline Screen &move(pos r, pos c);
	inline Screen move(pos r, pos c);

	char get() const { return contents[cursor]; }
	char get(pos r, pos c) const { return contents[r*width + c]; }

	//inline Screen &set(char);
	//inline Screen &set(pos, pos, char);
	inline Screen set(char);
	inline Screen set(pos, pos, char);

	//Screen &display(std::ostream &os) 
	//		{ do_display(os); return *this; }
	//const Screen &display(std::ostream &os) const 
	//			{ do_display(os); return *this; }
	Screen display(std::ostream &os) 
			{ do_display(os); return *this; }
	const Screen display(std::ostream &os) const 
				{ do_display(os); return *this; }

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};

/**
inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
**/

inline Screen Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

/**
inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
**/

inline Screen Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
/**
inline Screen &Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}
**/
inline Screen Screen::set(pos r, pos col, char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

#endif
