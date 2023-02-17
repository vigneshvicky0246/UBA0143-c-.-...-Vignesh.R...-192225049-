#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,m5;
	float agg;
	cout<<"\npls enter 5 sb mark";
	cin>>m1>>m2>>m3>>m4>>m5;
	cout<<"\ntotal mark"<<m1+m2+m3+m4+m5;
	cout<<"\nagg"<<m1+m2+m3+m4+m5/5;
	{
			if(agg>75)
		cout<<"\n the grade is distinatin";
		else if((agg<75)&&(agg>=60))
		cout<<"\nyou grade id a divi";
		else if((agg<60)&&(agg>=50))
		cout<<"\nthe grade id b divition";
		else if((agg<50)&&(agg>=40))
		cout<<"\nyou grade is 3 divition";
		else 
		cout<<"\nyou grade is fail";
		return 0;
	}
}
