#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void comp(int , int);
	int n1,n2;
	cout<<"enter the first number ? "<<endl;
	cin>>n1;
	cout<<"enter the second number ? "<<endl;
	cin>>n2;
	comp(n1, n2);
	getch();
}
void comp(int x, int y)
{
	(x>y)? cout<<"the value of A is greater than b":cout<<"the value of b is greater than A"<<endl;
}