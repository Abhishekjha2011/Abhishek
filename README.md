# C-#include<iostream>
using namespace std;
main()
{

int n,k,item;
int arr[10];
cout<<"\n Enter the Array size you want to insert =";
cin>>n;
cout<<"\n Enter the Elements =";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\n Enter the item to insert=";
cin>>item;
cout<<"\n Enter the loc where you insert =";
cin>>k;

for(int i=n-1;i>=k;i--)
{
arr[i+1]=arr[i];
}
arr[k]=item;
cout<<"\n Elements after Insertion =";
for(int i=0;i<=n;i++)
{
cout<<arr[i]<<" ";
}	
}
	
	
	
	
	
	
	
	
	
	

