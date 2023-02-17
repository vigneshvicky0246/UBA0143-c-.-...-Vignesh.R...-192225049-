#include<iostream>
using namespace std;
int main()
{
	int num,temp,temp1,rev=0;
	cout<"enter the number";
	cin>>num;
	while(num>0)
	{
		temp=num%10;
		rev=(rev*10+temp);
		num=-num/10;
		
	}
	do
	{
	cout<<"the reverse of the number is"<<rev;
	if(num==rev)
	cout<<"the no is palindrome";
	else
	cout<<"the no is not a palindrome";
}


