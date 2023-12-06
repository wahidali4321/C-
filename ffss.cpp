#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void tab(int);
	int n;
	cout<<"enter any number ? "<<endl;
	cin>>n;
	tab(n);
	getch();
}
void tab(int tt)
{
	for(int c=1;c<=10;c++)
	cout<<c<<"x"<<tt<<"= "<<c*tt<<endl;
}