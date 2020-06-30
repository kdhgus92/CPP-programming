#include <iostream>
using namespace std;

template <class T>
T SumArray(T arr[], int len)
{
	T sum = 0;
	for (int i = 0; i < len; i++)
		sum += arr[i];
	return sum;
}

int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	double arr2[] = { 3.5, 2.5, 2.9, 8.4 };

	cout << SumArray(arr, 5) << endl;
	cout << SumArray(arr2, 4) << endl;

	return 0;

}
