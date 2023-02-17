#include<iostream>
using namespace std;
class gf
{
	int r=10;
	public:
		void getdata0()
		{
			cout<<"\nbase class r"<<r;
		}
};
class f:public gf
{
	int r1=10;
	public:
		void getdata1()
		{
			cout<<"\ndervied class r1"<<r1;
		}
};
class m:public gf
{
int r2=10;
public:
	void getdata2()
	{
		cout<<"\ndervied class r2"<<r2;
	}
};
class c:public f,public m
{
	int r3=10;
	public:
		void getdata3()
		{
			cout<<"\ndervied dervird class r3"<<r3;
		}
};
int main()
{
	c a;
	a.getdata1();
	a.getdata2();
	a.getdata3();
	gf b;
	b.getdata0();
}
