#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int n) : gasolineGauge(n)
	{
		cout << "Car(int n)" << endl;
	}
	int GetGasGauge() {
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int n1, int n2) : Car(n1), electricGauge(n2)
	{
		cout << "HybridCar(int n1, int n2)" << endl;
	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int n1, int n2, int n3)
		: HybridCar(n1, n2), waterGauge(n3)
	{
		cout << "HybridWaterCar(int n1, int n2, int n3)" << endl;
	}
	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << waterGauge << endl;
	}
};

int main(void)
{
	HybridWaterCar hwc1(30, 40, 50);
	hwc1.ShowCurrentGauge();
	return 0;
}
