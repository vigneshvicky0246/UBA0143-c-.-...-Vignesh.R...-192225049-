#include<iostream>
using namespace std;
int vote(int age){
	if (age<18){
		age=18-age;
		cout<<"you are allowed to vote after "<<age<<" years";
	}
	else{
		cout<<"you are allowed to vote";
	}
}
int main(){
	int n;
	cout<<"enter your age";
	cin>>n;
	vote(n);
}

