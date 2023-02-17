#include<iostream>
using namespace std;
class number
{
	int a, b;
	public:
		number()
		{}
		number(int a,int b)
		{
			cout<<"enter a and b :";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"sum of 2 complex numbers:"<<a+b;
		}
};
int main()
{
	number n;
	number();number(10,7);
	n.display();
}
