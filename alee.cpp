#include<iostream>
using namespace std;
int main()
int sum(a,b);
{
	int num1,num2;
	cout<<"enter first number 1 "<<endl;
	cin>>num1;
	cout<<"enter second number "<<endl;
	cin>>num2;
	cout<<"the sum is "<<sum(num1,num2);
}
int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}