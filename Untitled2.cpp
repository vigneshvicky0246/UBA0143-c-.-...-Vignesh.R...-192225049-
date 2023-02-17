#include<iostream>
using namespace std;
class p
{
	public:
		void getdata()
		{
			cout<<"base 1 value";
		}
};
class c1:public p
{
	public:
		void putdata()
		{
			cout<<"base2 class";
		}
};
class c2:public p
{
	public:
		void putdata()
		{
			cout<<"d d class";
		}
};
int main()
{
	c2 c;
	c.putdata();
	c.getdata();
	p p;
	p.getdata();
	
}
