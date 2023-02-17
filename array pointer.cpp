#include<iostream>
using namespace std;
int main() {
	int a[4];
	for(int i=1; i<=4; i++) {
		cin>>a[i];
	}
	for(int j=1; j<=4; j++) {
		cout<<"\nb"<<&a[j];
	}
}
