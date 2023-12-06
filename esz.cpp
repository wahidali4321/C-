#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int abc[5], n,i,p;
	for(i=0;i<=4;i++)
	{
		cout<<"enter value in element ? "<<i<<"= ";
		cin>>abc[i];
	}
	p=0;
	cout<<"enter any integer value ? ";
	cin>>n;
	for(i=0;i<=4;i++)
	{
		if(n==abc[i])
		{
			p=i+1;
			break;
		}
	}
	if(p==0)
	cout<<"number not found ? ";
	else
	cout<<"number is found on that position ? "<<p<<endl;
}