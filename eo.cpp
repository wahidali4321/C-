#include<iostream>
using namespace std;
int main()
{
	int abc[5],i;
	for(i=0;i<=4;i++)
	{
		cout<<"enter value in element ? "<<i<<endl;
		cin>>abc[i];
		
	}
	cout<<"output in reverese order ? "<<endl;
	for(i=4;i>=0;i--)
	cout<<"value in a ["<<i<<"] "<<abc[i]<<endl;
	
}