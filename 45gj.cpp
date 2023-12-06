#include<iostream>
using namespace std;
int main()
{
	int abc[5],i;
	for(i=0;i<=4;i++)
	{
		cout<<"enter the value in array "<<i<<endl;
		cin>>abc[i];
		
	}
	cout<<"output in revrese order ? "<<endl;
	for(i=4;i>=0;i--)
	cout<<"the output in revsers order is ["<<abc[i]<<"]"<<endl;
}