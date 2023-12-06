#include<iostream>
using namespace std;
int main()
{
	float a[5], b[5],s[5];
	int i;
	cout<<"enter value in first array ? "<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<"enter value in element ? "<<i<<"= ";
		cin>>a[i];
		
	}
	cout<<"enter value in 2nd array ? "<<endl;
	for(i=0;i<=4;i++)
	{
		cout<<"enter value in element ? "<<i<<"= ";
		cin>>b[i];
	}
	cout<<"first + second = sum "<<endl;
	for(i=0;i<=4;i++)
	{
		s[i]=a[i]+b[i];
		cout<<a[i]<<"+ "<<b[i]<<"= "<<s[i]<<endl;
	}
}