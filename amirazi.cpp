#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void sum(int , int);
	int a, b;
	cout<<"enter the first value  ? "<<endl;
	cin>>a;
	cout<<"enter the 2nd value ? "<<endl;
	cin>>b;
	sum(a,b);
	cout<<"okay ? "<<endl;
	
}
void sum(int x, int y)
{
	int sum;
	sum=x+y;
	cout<<"the sum of x and y = "<<sum<<endl;
}