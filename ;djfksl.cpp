#include<iostream>
using namespace std;
int main()
{
	int tab,res,c;
	cout<<"enter the value of table ? ";
	cin>>tab;
	c=1;
	while(c<=10)
	{
		res =tab*c;
		cout<<tab<<"* "<<c<<"= "<<res<<endl;
		c++;
	}
}