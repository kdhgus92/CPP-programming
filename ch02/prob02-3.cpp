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
	cout << "PntAdder: " << pp << endl;
	return *pp;
}

int main(void)
{
	//Point po1, po2, result;
	//po1 = { 1,3 };
	//po2 = { 2,2 };
	//result = PntAdder(po1, po2);
	//cout << &result << endl;
	//cout << result.xpos << endl;
	//cout << result.ypos << endl;

	Point* pptr1 = new Point;
	pptr1->xpos = 1;
	pptr1->ypos = 3;

	Point* pptr2 = new Point;
	pptr2->xpos = 2;
	pptr2->ypos = 2;

	Point &pref = PntAdder(*pptr1, *pptr2);
	cout << "[" << pref.xpos << "," << pref.ypos << "]" << endl;

	delete pptr1;
	delete pptr2;
	delete &pref;

	return 0;
}
