#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void product(int , int);
	product(22,3);
	cout<<"okay ? "<<endl;
}
void product(int x, int y)
{
	int product;
	product=x*y;
	cout<<"the product of x and y = "<<product<<endl;
}