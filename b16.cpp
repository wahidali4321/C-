#include<iostream>
using namespace std;
void wahid( int arr[], int size){
	for (int i = 0 ; i< size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	// example
	int myArray[]= {1,2,3,4,5};
	int size = sizeof(myArray)/ sizeof(myArray[0]);
	wahid(myArray,size);
}