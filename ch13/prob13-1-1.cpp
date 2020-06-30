#include <iostream>
using namespace std;

template <class T>
void SwapData(T& pvar1, T& pvar2)
{
	T temp = pvar1;
	pvar1 = pvar2;
	pvar2 = temp;
}

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{ }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

int main(void)
{
	Point pos1(1, 1);
	Point pos2(2, 2);
	pos1.ShowPosition();
	pos2.ShowPosition();

	SwapData(pos1, pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();
	return 0;

}
