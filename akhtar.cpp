#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void sum(int ,  int);
	int n1, n2;
	cout<<"enter the first number ? "<<endl;
	cin>>n1;
	cout<<"enter the second number ? "<<endl;
	cin>>n2;
	 sum(n1, n2);
	getch();
}
void sum(int x, int y)
{
	int sum;
	sum= x+y;
	cout<<"the sum of x and y = "<<sum<<endl;
	
}