#include<iostream>
using namespace std;
main()
{
int a[10];
int n,k;
cout<<"\nEnter the number of elements you want to store";
cin>>n;
cout<<"\nEnter the array elements";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nEnter the position for deletion";
cin>>k;
for(int i=k;i<n;i++)
{
a[i]=a[i+1];
}

cout<<"\nElements after deletion";
for(int i=0;i<n-1;i++)
{
cout<<a[i]<<" ";
}
}
