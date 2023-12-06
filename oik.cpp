#include<iostream>
using namespace std;
int main()
{
	int age;
	long int age_mon;
	char name[50];
	cout<<"enter the name of the person ? ";
	cin>>name;
	cout<<"enter the age of the  person in years  ? ";
	cin>>age;
	age_mon=age*12;
	cout<<"name of the person ? "<<name<<endl;
	cout<<"age in months "<<age_mon<<endl;
}