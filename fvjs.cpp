#include<iostream>
using namespace std;
int main()
{
	void sum(int , int );
	int a,b;
	cout<<"enter the 1st value ? ";
	cin>>a;
	cout<<"enter the 2nd value ? ";
	cin>>b;
	sum(a,b);
	cout<<"okay"<<endl;
	
}
void sum(int x, int y)
{
	int s;
	s= x+y;
	cout<<"the sum = "<<s<<endl<<endl;
}