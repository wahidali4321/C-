#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void sub(int , int );
	int n1,n2;
	cout<<"enter the first number ? "<<endl;
	cin>>n1;
	cout<<"enter the second number ? "<<endl;
	cin>>n2;
	sub(n1,n2);
	getch();
	
}
void sub(int x, int y)
{
	int sub;
	sub=x-y;
	cout<<"the subtraction of x and y ? "<<sub<<endl;
}