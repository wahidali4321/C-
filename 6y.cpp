#include<iostream>
using namespace std;
int main()
{
	int abc[5], i;
	for(i=0;i<=4;i++)
	{
		cout<<"enter value in in elemetn ? "<<i<<endl;
		cin>>abc[i];
	}
	cout<<"order in reverse form ? "<<endl;
	for(i=4;i>=0;i--)
	cout<<"output will be ["<<i<<"]"<<abc[i]<<endl;
}