#include<iost
	public:
		void getdata1()
		{
			cout<<"\n dervied class1 "<<y;
		}
	};
class C2:public p
{
	int z=5;
	public:
		void getdata2()
		{
			cout<<n"\n dervied class2"<<z;
		}
};
class C3:public p
{
	int z1=5;
	public:
		void getdata3()
		{
			cout<<"\n dervied class3"<<z1;
		}
};
int main()
{
	C3 c;
	c.getdata();
	c.getdata3();
	C1 c1;
	c1.getdata1();
	C2 c2 ;
	c2.getdata2();
	
}
                                     
 
