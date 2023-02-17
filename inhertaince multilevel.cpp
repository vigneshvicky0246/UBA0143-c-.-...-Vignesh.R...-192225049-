#include<iostream>
using namespace std;
class GF
{
	int x=5;
	public:
		void getdata()
		{
			cout<<"\n base class"<<x;
		}
		
};
class F:public GF
{
	int y=5;
	public:
		void getdata1()
		{
			cout<<"\n dervied class"<<y;
		}
		
};
class C:public F
{
	int z=5;
	public:
		void getdata2()
		{
			cout<<"\n DERVIED dervire class"<<z;
		}
		
};
int main()
{
	C c;
	c.getdata2();
	c.getdata1();
	c.getdata();
}
