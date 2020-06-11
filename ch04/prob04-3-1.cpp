#include <iostream>
using namespace std;
class Point
{
private:
	int xpos, ypos;
public:
	Point(const int& x, const int& y) : xpos(x), ypos(y) {}

	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};
class Circle
{
private:
	Point center;
	int radius;
public:
	Circle (const int& centx, const int& centy, const int& rad)
		: center(centx, centy), radius(rad)
	{}

	void ShowCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		center.ShowPointInfo();
	}
};
class Ring
{
private:
	Circle inner;
	Circle outter;
public:
	Ring (int innerx, int innery, int innerrad, int outterx, int outtery, int outterrad)
		: inner(innerx, innery, innerrad), outter(outterx, outtery, outterrad)
	{}

	void ShowRingInfo() const
	{
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outter.ShowCircleInfo();
	}
};
int main(void)
{
	Ring ring(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
