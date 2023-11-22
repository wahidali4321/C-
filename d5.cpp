#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){
	for (int i = 0 ; i < size; ++i){
		if (arr[i] == key){
			return i;
		}
	}
	return -1;
}
int main(){
	const int size = 10;
	int arr[size] = {11,22,33,44,55,66,77,88,99};
	cout<<" enter the element to search : ";
	int key;
	cin>>key;
	
	int result = linearSearch(arr,size,key);
	
	if (result != -1){
		cout<<"element found at the index "<<result<<endl;
		
	}
	else{
		cout<<"element not found at the index "<<endl;
	}
	return 0;
}