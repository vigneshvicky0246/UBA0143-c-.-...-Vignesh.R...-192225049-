#include<iostream>
using namespace std;
class p
{
	public:
		void getdata()
		{
			cout<<"base class";
		}
};
class c:public p
{
	public:
		void putdata()
		{
			cout<<"derived class";
		}
};
class c:public p
{
	public:
		void putdata()
		{
			cout<<"d d class";
		}
};
int main()
{
	c.c;
	c.putdata();
	c.getdata();
}
