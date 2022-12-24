#include<iostream>
using namespace std;
int main()
{

int n,item,loc=-1;
int arr[25];
cout<<"\n Enter the Elements =";
cin>>n;
cout<<"\n Enter the Elements you Search =";
cin>>item;
cout<<"\n Array Elements after sorted =";
for(int i=0;i<n;i++ )
{
cin>>arr[i];
}
int beg=1;
int end=n;
int mid=(beg+end)/2;
while(beg<=end)
{
if (arr[mid]==item)
{
	
loc=mid;
break;
}
	
else if(arr[mid]<item)
{
beg=mid+1;
	
	
}

else
end=mid-1;
mid=(beg+end)/2;
}
cout<<"\n Element found at "<<loc;
}

