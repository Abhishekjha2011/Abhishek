#include<iostream>
using namespace std;
 main()
{
int n,k,i,item;	
int arr[20];
cout<<"Enter the Array size =";
cin>>n;
cout<<"Enter the Elements =";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"\n Enter the Elements for delete =";
cin>>k;	
for(i=k;i<n;i++)
{
arr[i]=arr[i+1];
}
cout<<"\n Elements after Delete =";
for(int i=0;i<n-1;i++)
{
	
cout<<arr[i]<<" ";
}

	
}	
		
	
	
	

