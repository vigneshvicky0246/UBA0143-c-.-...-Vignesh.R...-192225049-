#include<iostream>
using namespace std;
class b
{
	int rbi=85;
	public:
		void getdata()
		{
			cout<<"\n base class"<<rbi;
		}
};
class i:public b
{
	int roi=45;
	public:
		void getdata1()
		{
			cout<<"\n icic roi"<<roi;
			
		}
};
class s:public b
{
	int roi2=38;
	public:
		void getdata2()
		{
			cout<<"\n sbi"<<roi2;
			
		}
};
class i2:public b
{
	int roi3=4;
	public:
		void getdata3()
		{
			cout<<"\n iob"<<roi3;
			
		}
};
class C:public i,public s,public i2
{
	int roi4=roi+roi2+roi3;
	public:
		void getdata4()
		{
			cout<<"\n iob"<<roi3;
			
		}
};

int main()
{
	C c;
	c.getdata3();
	c.getdata2();
	c.getdata1();
	b d;
	d.getdata();
	b.getdata4();
}

