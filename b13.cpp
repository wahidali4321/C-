#include<iostream>
using namespace std;
void traverseArray(int arr[], int size){
	for (int i = 0 ; i <size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	// example of array
	int myArray[] = {1,2,3,4,5};
	// calculate the size of array
	int size = sizeof(myArray) / sizeof(myArray[0]);
	// call the function to traverse the array
	traverseArray(myArray, size);
	
}