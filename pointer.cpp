#include<iostream>
using namespace std;
int main() {

	int *x,*y;
	cout<<"enter the value x and y";
	cin>>*x>>*y;
	cout<<"enter the x"<<&x;
	cout<<"enter the y"<<&y;
	cout<<"sun of x and y"<<*x+*y;
	cout<<"sub of x and y"<<*x-*y;
	cout<<"mult of x and y"<<*x**y;


}
