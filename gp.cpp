#include<iostream>
using namespace std;
class GP
{
	public:
		void getdata()
		{
			cout<<"GP=20c";
		}
};
class F : public GP
{
	public:
		void getdata1()
		{
			cout<<"10c=";
		}
};
class M : public GP
{
	public:
		void getdata2()
		{
			cout<<"M=10c=";
		}
};
class C: public F,public M
{
	public:
		void getdata3()
		{
			cout<<"10C=";
		}
};
int main()
{
	C c;
	c.getdata3();
	c.getdata2();
	c.getdata1();
	GP gp;
	gp.getdata();
}

	
