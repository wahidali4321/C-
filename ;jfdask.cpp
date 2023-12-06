#include<iostream>
using namespace std;
int main()
{
	int tab,res,c;
	cout<<"enter the first number ? ";
	cin>>tab;
	c=1;
	while(c<=10)
	{
		res=tab*c;
		cout<<tab<<"*"<<c<<"= "<<res<<endl;
		c++;
	}
	
	
}