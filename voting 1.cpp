#include<iostream>
using namespace std;
int main(){
	int age,limit=18;
	cout<<"enter your age ";
	cin>>age;
	if(age<limit){
		age=limit-age;
		cout<<"you are allowed to vote after "<<age<<"years";
	}
	else{
		cout<<"you are allowed to vote";
	}
}
