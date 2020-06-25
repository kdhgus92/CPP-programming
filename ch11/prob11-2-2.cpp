#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;
	//BoundCheckIntArray(const BoundCheckIntArray& arr) { }
	//BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) { }
public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bount exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray()
	{
		delete[] arr;
	}
};

typedef BoundCheckIntArray BCIA;


class BoundCheck2DIntPtrArray
{
private:
	int** arr;
	int arrlen;
	int arrlen2;
	BoundCheck2DIntPtrArray(const BoundCheck2DIntPtrArray& arr) { }
	BoundCheck2DIntPtrArray& operator=(const BoundCheck2DIntPtrArray& arr) { }
public:
	BoundCheck2DIntPtrArray(int len, int len2) : arrlen(len), arrlen2(len2)
	{
		arr = new int*[len];
		for (int i = 0; i < len; i++)
			arr[i] = new int[len2];
	}
	int*& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bount exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int* operator[] (int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bount exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen() const { return arrlen; }
	friend ostream& operator<< (ostream& os, const int** ref);
	~BoundCheck2DIntPtrArray() { delete[] arr; }
};

ostream& operator<< (ostream& os, const int** ref)
{
	os << **ref;
	return os;
}

int main(void)
{
	BoundCheck2DIntPtrArray arr2D(3, 4);
	for (int n = 0; n < 3; n++)
		for (int m = 0; m < 4; m++)
			arr2D[n][m] = n + m;

	for (int n = 0; n < 3; n++)
	{
		for (int m = 0; m < 4; m++)
			cout << arr2D[n][m] << ' ';
		cout << endl;
	}

	return 0;
}

