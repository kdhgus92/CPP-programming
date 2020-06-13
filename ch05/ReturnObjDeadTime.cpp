#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	cout << endl;

	SimpleFuncObj(obj);
	cout << endl;


	//Temp Obj를 참조로 받는 경우.
	const SoSimple& ref = SimpleFuncObj(obj);
	cout << "1) ref : " << &ref << endl;
	cout << endl;

	//2) Temp Obj를 이용한 생성.
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "2) Return obj " << &tempRef << endl;
	cout << endl;

	//3) 2)번이 묵시적으로 변환
	SoSimple tempRef2(SimpleFuncObj(obj));
	cout << "3) Return obj " << &tempRef2 << endl;
	cout << endl;

	return 0;
}
