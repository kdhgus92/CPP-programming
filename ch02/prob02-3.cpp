#include <iostream>
#include <string.h>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pp = new Point;
	pp->xpos = p1.xpos + p2.xpos;
	pp->ypos = p1.ypos + p2.ypos;
	return *pp;
}

int main(void)
{
	Point po1, po2, result;
	po1 = { 1,3 };
	po2 = { 2,2 };
	result = PntAdder(po1, po2);
	cout << result.xpos << endl;
	cout << result.ypos << endl;
	return 0;
}
