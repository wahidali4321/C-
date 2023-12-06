#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum;
	a=1;
	b=2;
	c=3;
	sum=a+b+(++c);
	cout<<"sum = "<<sum;
	cout<<"c = "<<c;
	return 0;
}