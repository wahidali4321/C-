#include<iostream>
using namespace std;
void wahid(int arr[], int size){
	for (int i =0 ; i <size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int wa[]={1,2,3,4,5};
	int size = sizeof(wa) / sizeof(wa[0]);
	wahid(wa,size);
}