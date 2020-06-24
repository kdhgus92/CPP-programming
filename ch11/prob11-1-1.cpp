#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{}
	//Gun(Gun& ref) : bullet(ref.bullet)
	//{
	//	if (&ref == NULL)
	//		;
	//	cout << "Gun(Gun& ref) 호출" << endl;
	//}
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun* pistol;
public:
	Police(int bnum, int bcuff)
		:handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum);
		else
			pistol = NULL;
	}
	Police(const Police& ref) : handcuffs(ref.handcuffs)
	{
		if (ref.pistol == NULL)
			pistol == NULL;
		else
			pistol = new Gun(*ref.pistol);
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

	void Shot()
	{
		if (pistol == NULL)
			cout << "Hut BBANG!" << endl;
		else
			pistol->Shot();
	}
	~Police()
	{
		if (pistol != NULL)
			delete pistol;
	}
	Police& operator=(const Police& ref)
	{
		if (pistol != NULL)
			delete pistol;

		if (ref.pistol == NULL)
			pistol == NULL;
		else
			pistol = new Gun(*ref.pistol);

		handcuffs = ref.handcuffs;
		return *this;
	}
};

int main(void)
{
	Police pman1(5, 3);
	Police cpman1(0, 0);
	Police cpman11(pman1);
	cpman1 = pman1;
	pman1.Shot();
	cpman1.Shot();
	cpman11.Shot();
	pman1.PutHandcuff();
	cpman1.PutHandcuff();
	cpman11.PutHandcuff();

	Police pman2(0, 3);
	Police cpman2(0, 0);
	Police cpman3(pman2); //Police 복사 생성자
	cpman2 = pman2;
	pman2.Shot();
	cpman2.Shot();
	cpman3.Shot();
	pman2.PutHandcuff();
	cpman2.PutHandcuff();
	cpman3.PutHandcuff();

	return 0;
}
