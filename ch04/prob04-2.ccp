#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public: 
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

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
	void Init(int centx, int centy, int rad)
	{
		center.Init(centx, centy);
		radius = rad;
	}

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
	void Init(int innerx, int innery, int innerrad, int outterx, int outtery, int outterrad)
	{
		inner.Init(innerx, innery, innerrad);
		outter.Init(outterx, outtery, outterrad);
	}

	void ShowRingInfo()
	{
		cout << "Inner Circle Info..." << endl;
		inner.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		outter.ShowCircleInfo();
	}
};

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}
