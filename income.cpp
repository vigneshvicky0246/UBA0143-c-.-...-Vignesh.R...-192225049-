#include<iostream>
using namespace std;
int main(){
	int tax,income;
	cout<<"enter your income";
	cin>>income;
	if(income<=60000){
		tax=0;
		cout<<"your income tax is"<<tax;
	}
	else if(income>60000 and income<=150000){
		tax=income*0.05;
			cout<<"your income tax is"<<tax;
	}
	else if(income>150000 and income<=500000){
		tax=income*0.1;
			cout<<"your income tax is"<<tax;
	}
	else{
		tax=income*0.15;
			cout<<"your income tax is"<<tax;
	}
}
