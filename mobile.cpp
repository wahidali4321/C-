#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void sub(int , int);
	sub(55,11);
	cout<<"okay ?"<<endl;
	getch();
	
}
void sub(int x, int y)
{
	int sub;
	sub= x-y;
	cout<<"the subtraction of x and y = "<<sub<<endl;
}