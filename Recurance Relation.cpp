#include<iostream>
using namespace std;
int main()
  {
    int a[9]={0};
    int n,k,item;
    int sum =0;
     cout<<"enter the size of array "<<endl;
    cin>>n;
     cout<<"enter the number of  element to insert in to array"<<endl;
     cin>>k;
     cout<<"enter"<<k<<"number of element"<<endl;
    int i;
    
    for ( i=0;i<k;i++){
        cin>>a[i];
        sum = sum+a[i];
    }
    int len = sizeof(a)/sizeof(a[0]);
    cout << "The length of the array is: " << len<<endl;
    cout<<"enter the item and position for insertion"<<endl;
    if(len==k){
        cout<<"Insertion is not possible becouse Array Overflow.";
    }
   int p=0;

  
  int t=0;
  while(sum!=0){
      t=sum%10;
      p=p+t;
      sum=sum/10;
  
}
     cout<<"enter the item  for insertion"<<endl;
    cin>>item;
     cout<<"position"<<p<<endl;
    for(int i=n-1;i>=p;i--){
    	a[i+1]=a[i];
    	
	}
	int c=p-1;
	
	a[c]=item;
 	cout<<"after insertion"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
// 	a[i]=a[i]+1;
//   cout<<a[i];
      
    return 0;
}
