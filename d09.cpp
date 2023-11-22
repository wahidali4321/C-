#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){
	for (int i = 0 ; i < size ; ++i){
		if (arr[i] == key){
			return i;
		}
	}
	return -1;
}
int main(){
	int const size = 10;
	int arr[10]={1,2,3,4,5,6,7,8,9};
	cout<<"enter the element ";
	int key;
	cin>>key;
	int result = linearSearch(arr,size,key);
		if (result != -1){
			cout<<"element is found at index at "<<result<<endl;
		}
		else{
			cout<<"element is not found at index ";
		
	}
	return 0;
	
}