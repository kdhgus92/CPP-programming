#ifndef __HEADER_H__
#define __HEADER_H__

//#ifndef __POINT_H_
//#define __POINT_H_

class Point
{
private:
	int x;
	int y;

public:
	Point(const int& xpos, const int& ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif
