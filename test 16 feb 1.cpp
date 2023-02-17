#include<iostream>
using namespace std;
int main()
{
	int regno,m1,m2,m3;
	char name[20];
	float avg;
	cin>>regno;
	cin>>name;
	cin>>m1;
	cin>>m2;
	cin>>m3;
	cout<<regno;
	cout<<"\n"<<name;
	cout<<"\n"<<m1;
	cout<<"\n"<<m2;
	cout<<"\n"<<m3;
	avg=(
	m1+m2+m3)/3;
	cout<<"\n\n\n"<<avg;
	if(avg>90)
	cout<<"\n your grade is A";
	else if(avg>=80)
	cout<<"\n your grade is B";
	else if(avg>=70)
	cout<<"\n your grade is c";
	else if(avg>=60)
	cout<<"\n your grade is d";
	else
	cout<<"\n your grade is F";
	return 0;
}
