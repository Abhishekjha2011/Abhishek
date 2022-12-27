#include<iostream>
using namespace std;
main()
{
int a[100];
int n,item,loc=-1;
cout<<"\nEnter the number of elements you want to store";
cin>>n;
cout<<"\nEnter the number you want to search";
cin>>item;
cout<<"\nEnter the array elements in sorted order";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int beg=1;
int end=n;
int mid=(beg+end)/2;
while(beg<=end)
{
if(a[mid]==item)
{
loc=mid;
break;
}
else if(a[mid]<item)
{
beg=mid+1;
}
else
end=mid-1;

mid=(beg+end)/2;
}
cout<<"\n element found at "<<loc;
}
