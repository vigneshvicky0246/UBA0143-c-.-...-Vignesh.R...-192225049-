#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the size of Array: ";
 cin>>n;
 int a[n];
 for(int i=0;i<n;i=i+1)
 {
  cout<<"Enter the number: ";
  cin>>a[i];
 }
 cout<<"Enterd array numbers: ";
 for(int j=0;j<n;j=j+1)
 {
  cout<<a[j]<<" ";
 }
 cout<<endl<<"Most Frequent Element in an Array "<<a[0];
return 0;
}

