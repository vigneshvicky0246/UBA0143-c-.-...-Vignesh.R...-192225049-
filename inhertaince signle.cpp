#include<iostream>
using namespace std;
class A
{
	int x=5;
	public:
		void getdata()
		{
			cout<<"base class x="<<x;
		}	
			
		};
		class B:public A
		{
			int y=5;
			public:
				void getdata1()
				{
					cout<<"\n dervied class y="<<y;
					
				}
		};
		
		int main()
		{
			B b;
			b.getdata();
			b.getdata1();
		}

