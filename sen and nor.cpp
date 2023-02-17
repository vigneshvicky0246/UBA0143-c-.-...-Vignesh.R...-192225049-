#include<iostream>
using namespace std;
class simpleintrest
{
	int p,n,sen,nor,a,y;
	public:
		void getdata()
		{
			cout<<"enter the principle amount";
			cin>>p;
			cout<<"enter no of years";
			cin>>y;
		}
		void calculation()
		{
			sen=p*n*0.12;
			nor=p*n*0.10;
		}
		void display()
		{
			cout<<"is customer senior citizen(y/n)";
			cin>>a;
		
			if(a==y)
			{
				cout<<"simple intrest is"<<sen;
				
			}
			else
			{
				cout<<"simple intrest is"<<nor;
			}
		}
			
			
		
};
int main()
{
	simpleintrest s;
	s.getdata();
	s.calculation();
	s.display();
}
