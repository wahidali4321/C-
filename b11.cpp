#include<iostream>
using namespace std;
 // function to traverse an array 
 void traverseArray(int arr[], int size){
 	for (int i = 0; i < size;++i){
 		cout << arr[i]<<" ";
	 }
	 cout<<endl;
 }
 int main(){
 	int myArray[]= {1,2,3,4,5};
 	// calculate the size of the array 
 	int size = sizeof(myArray) / sizeof(myArray[0]);
 	traverseArray(myArray,size);
 	return 0;
 }