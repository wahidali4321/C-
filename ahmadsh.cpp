#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void sum(int , int);
	sum(13,56);
	cout<<"okay "<<endl;
	getch();
}
void sum(int x, int y)
{
	int sum;
	sum= x + y;
	cout<<"the sum of x and y = "<<sum<<endl;
}