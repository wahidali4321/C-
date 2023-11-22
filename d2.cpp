#include<iostream>
using namespace std;
 int linearSearch(int arr[], int size, int key){
 	for (int i = 0; i < size ; ++i){
 		if (arr[i]== key){
 			return i;
		 }
	 }
	 return -1;
 }

int main(){
	const int size = 10 ;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10};
	cout <<"enter the element to search : ";
	int key;
	cin >> key;
	
	int result = linearSearch(arr, size, key);
	
	if (result != -1){
		cout<< " element found at index " <<result << endl;	
	}
	else{
		cout<<"element not found in the array ."<<endl;
	}
	return 0;
}