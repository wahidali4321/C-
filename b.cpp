#include<iostream>
using namespace std;
void DisplayLarger(){
	char c1, c2;
	cout<<"enter the first character ? "<<endl;
	cin>>c1;
	cout<<"enter the second character ? "<<endl;
	cin>>c2;
	if(c1 > c2){
		cout<<"1st character is greater than 2nd character "<<c1<<endl;
	}
	else{
		cout<<"2nd character is lesser than 1st one "<<c2<<endl;
	}
}
int main(){
	DisplayLarger();
}