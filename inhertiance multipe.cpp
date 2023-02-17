#include<iostream>
using namespace std;
class A
{
	int x=5;
	public:
		void getdata()
		{
			cout<<"\n base class"<<x;
		};
class C
{
	int y=5;
	public:
		void getdata1()
		{
			cout<<"\n base class"<<y;
		}
	};
class B:public A,public C
{
	int z=5;
	public:
		void getdata2()
		{
			cout<<"\n base class"<<z;
		}
};
int main()
{
	B c;
	c.getdata2();
	c.getdata1();
	c.getdata();
}

