#include<iostream>
using namespace std;
int main()
{
	float abc[5],sum,avg;
	int i;
	for(i=0;i<=4;i++)
	{
		cout<<"enter values in element ? "<<i<<endl;
		cin>>abc[i];
	}
	sum=avg=0.0;
	for(i=4;i>=0;i--)
	sum=sum+abc[i];
	avg=sum/5.0;
	cout<<"sum of array values ? "<<sum<<endl;
	cout<<"average of array values ? "<<avg<<endl;
}