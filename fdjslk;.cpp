#include<iostream>
using namespace std;
int main()
{
	float abc[5], max;
	int i;
	for(i=0;i<=4;i++)
	{
		cout<<"enter value in element ? "<<i<<endl;
		cin>>abc[i];
	}
	max=abc[0];
	for(i=1;i<=4;i++)
	{
		if(max<abc[i])
		max=abc[i];
	}
	cout<<"maximum value is = "
}