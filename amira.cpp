#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void sum(int , int);
	int a,b;
	cout<<"enter the 1st value ? "<<endl;
	cin>>a;
	cout<<"enter the 2nd value ? "<<endl;
	cin>>b;
	sum(a,b);
	cout<<"okay ";
	
}
void sum(int x, int y)
{
	int s;
	s= x+ y;
	cout<<"sum = "<<s<<endl;
}