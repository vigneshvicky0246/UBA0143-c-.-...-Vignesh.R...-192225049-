#include<iostream>
using namespace std;
class F
{
	public:
		void getdata()
		{
			cout<<"base value";
		}
};
class M
{
	public:
		void putdata()
		{
			cout<<"base class";
		}
};
class C:public F,public M
{
	public:
		void putdata()
		{
			cout <<"d.d class";
		}
};
int main()
{
	C c;
	c.putdata();
	c.putdata();
	c.getdata();
}
