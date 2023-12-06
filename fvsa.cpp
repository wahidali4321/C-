#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void product(int , int);
	int n1, n2;
	cout<<"enter the first number ? "<<endl;
	cin>>n1;
	cout<<"enter the second number ? "<<endl;
	cin>>n2;
	product(n1,n2);
	getch();
}
void product(int x, int y)
{
	int product;
	product=x*y;
	cout<<"the product of x and y = "<<product<<endl;
}