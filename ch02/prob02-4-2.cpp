#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(void)
{
	int arr[5];
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << endl;
		printf("Random number #%d: %d\n", i, rand() % 100);
	}


	return 0;
}
