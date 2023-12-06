#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void comp(int , int);
	comp(33,55);
	cout<<"okay "<<endl;
	
}
void comp(int x, int y)
{
	(x>y)? cout<<"value of a is greatr ?":cout<<"value of b is greater ? "<<endl;
}