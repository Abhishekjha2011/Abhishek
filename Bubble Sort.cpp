#include<iostream>
using namespace std;
//#define MAX_SIZE 5
int main() {
int arr_sort[10], i, j, a, t;
int size;
cout<<"\n enter size";
cin>>size;

cout << "\nEnter " <<size<< " Elements for Sorting : " << endl;
for (i = 0; i <size; i++)
cin >> arr_sort[i];

cout << "\nYour Data :";
for (i = 0; i < size; i++) {
cout << "\t" << arr_sort[i];
}

for (i = 1; i <size; i++) {
for (j = 0; j < size - 1; j++) {
if (arr_sort[j] > arr_sort[j + 1]) {
//Swapping Values
t = arr_sort[j];
arr_sort[j] = arr_sort[j + 1];
arr_sort[j + 1] = t;
}
}

cout << "\nIteration : " << i;
for (a = 0; a < size; a++) {
cout << "\t" << arr_sort[a];
}
}

cout << "\n\nSorted Data :";
for (i = 0; i < size; i++) {
cout << "\t" << arr_sort[i];
}
}

