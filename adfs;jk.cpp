#include<iostream>
using namespace std;
int main()
{
	void sum(int , int );
	int a,b;
	cout<<"enter the first number ? "<<endl;
	cin>>a;
	cout<<"enter the second number ? "<<endl;
	cin>>b;
	sum(a,b);
	cout<<"okay "<<endl;
}
void sum(int x, int y)
{
	int s;
	s= x+y;
	cout<<"the sum of x and y is "<<s<<endl;
}