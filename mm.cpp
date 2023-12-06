#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the first value ? ";
	cin>>a;
	cout<<"enter the second value ? ";
	cin>>b;
	if(a>b)
	cout<<"the value of a is greater than b ";
	if(a<b)
	cout<<"the value of b is greater than a ";
	else
	cout<<"the value of a and b are both equal ";
	return 0;
}