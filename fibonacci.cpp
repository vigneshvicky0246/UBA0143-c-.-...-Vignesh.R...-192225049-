#include<iostream>
using namespace std;
int main(){
	int n,a=0,b=1,c,i;
	cout<<"enter the number";
	cin>>n;
	cout<<a<<b;
	for(i=1;i<n;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c;
	}
}
