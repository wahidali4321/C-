#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void sum(int , int);
	int n1,n2;
	cout<<"enter the 1st value ? "<<endl;
	cin>>n1;
	cout<<"enter the 2nd value ? "<<endl;
	cin>>n2;
	sum(n1,n2);
	getch();
}
void sum(int x, int y)
{
	int sum;
	sum=x+y;
	cout<<"the usm "<<sum;
}
