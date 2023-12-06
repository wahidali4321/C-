#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int kg, gm;
	int grams(int);
	cout<<"enter value in kilograms ? ";
	cin>>kg;
	gm=grams(kg);
	cout<<"answer in grams ? "<<gm;
	
}
int grams(int val)
{
	return val*1000;
}