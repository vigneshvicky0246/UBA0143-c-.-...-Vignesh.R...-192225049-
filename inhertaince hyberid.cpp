#include<iostream>
using namespace std;
class A
{
	int x=5;
	public:
		void getdata()
		{
			cout<<"\n base class"<<x;
		}
};
class B:public A
{
	int y=5;
	public:
		void getdata1()
		{
			cout<<"\n detrvied class"<<y;
			
		}
};
class C
{
	int z=5;
	public:
		void getdata2()
		{
			cout<<"\n base 2 class"<<z;
			
		}
};
class D:public B,public C
{
	int z1=5;
	public:
		void getdata3()
		{
			cout<<"\n dervied 2 class"<<z1;
			
		}
};
int main()
{
	D c;
	c.getdata3();
	c.getdata2();
	c.getdata1();
	A b;
	b.getdata();
}

