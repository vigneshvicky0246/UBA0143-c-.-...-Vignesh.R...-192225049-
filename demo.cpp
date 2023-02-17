#include<iostream>
using namespace std;
int main(){
	int amount,years,interest,y=1,n=0;
	cout<<"enter the amount ";
	cin>>amount;
	cout<<"enter the number of  years";
	cin>>years;
	int p;
	cout<<"y or n";
	cin>>p;
	if (p==n)
	{
		interest=(amount*years*10)/100;
		cout<<"interest is "<<interest;
	}
	else if(p==y){
		interest=(amount*years*12)/100;
		cout<<"interest is "<<interest;
	}
	else{
		cout<<"wrong input";
	}
}
