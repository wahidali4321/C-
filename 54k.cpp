#include<iostream>
using namespace std;
int main()
{
	int abc[5], i;
	for(i=0;i<=4;i++)
	{
		cout<<"output in element ? "<<i<<endl;
		cin>>abc[i];
	}
	cout<<"output in reveres order ? "<<endl;
	for(i=4;i>=0;i--)
	cout<<"output will be ["<<i<<"]"<<abc[i]<<endl;
}