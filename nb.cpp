#include<iostream>
using namespace std;
int main()
{
	float c,f;
	cout<<"enter the temperature in fahrenheit ? ";
	cin>>f;
	c=(f-32)*5.0/9.0;
	cout<<"temperature in celsius = "<<c;
	return 0;
}