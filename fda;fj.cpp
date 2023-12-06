#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the first digit ? "<<endl;
	cin>>a;
	cout<<"enter the second digit ? "<<endl;
	cin>>b;
	cout<<"enter the third digit ? "<<endl;
	cin>>c;
	if(a==b)
	{
		if(a==c)
		cout<<"all digits are equal with each other ? "<<endl;
	}
	else
	cout<<"these values are different ? "<<endl;
}