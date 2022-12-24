
#include <iostream> 
using namespace std;   
 
int partition (int s[], int start, int end)   
{   
    int pivot = s[end];  
    int i = (start - 1);   
  for (int j = start; j <= end - 1; j++)   
    {       if (s[j] < pivot)   
        {   
            i++; 
            int t = s[i];   
            s[i] = s[j];   
            s[j] = t;   
        }   
    }   
    int t = s[i+1];   
    s[i+1] = s[end];   
    s[end] = t;   
    return (i + 1);   
}   
   
   
void quick(int s[], int start, int end)   
{   
    if (start < end)   
    {   
        int p = partition(s, start, end);  
        quick(s, start, p - 1);   
        quick(s, p + 1, end);   
    }   
}   
   
/* function to print an array */   
void printArr(int s[], int n)   
{   
    int i;   
    for (i = 0; i < n; i++)   
        cout<< s[i]<<"\t";   
}   
int main()   
{   
    int s[] = {9,7,5,11,12,2,14,3,10,6 };   
    int n = sizeof(s) / sizeof(s[0]);   
    cout<<"Before sorting array elements are - \n";   
    printArr(s, n);   
    quick(s, 0, n - 1);   
    cout<<"\nAfter sorting array elements are - \n";     
    printArr(s, n);   
      }
