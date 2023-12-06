#include<iostream>
using namespace std;
int main()
{
	void sub(int , int );
	int a,b;
	cout<<"enter the first number ? "<<endl;
	cin>>a;
	cout<<"enter the second number > "<<endl;
	cin>>b;
	sub(a,b);
	cout<<"okay "<<endl;
	
}
void sub(int x, int y)
{
	int sub;
	sub= x-y;
	cout<<"the subtraction of x and y is equal "<<sub<<endl;
	
}