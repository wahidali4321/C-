#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int kg,gm;
	int grams(int );
	cout<<"enter the value in grams ? ";
	cin>>kg;
	gm = grams(kg);
	cout<<"the answer will be "<<gm;
}
int grams(int val)
{
	return val*1000;
}