#include<iostream>
using namespace std;
void traverseArray(int arr[],int size){
	for (int i=0; i < size; ++i){
		cout << arr[i]<< ' ";
	}
	cout<<endl;
}
int main(){
	int myArray[]={1,2,3,4,5};
	int size = sizeof(myArray) / sizeof(myArray[0]);
	traverseArray(myArray,size);
	return 0;
}