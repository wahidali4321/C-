#include<iostream>
using namespace std;
int main()
{
	int age;
	long int age_mon;
	char name[50];
	cout<<"enter the name of the person "<<endl;
	cin>>name;
	cout<<"enter the age of the person "<<endl;
	cin>>age;
	age_mon=age*12;
	cout<<"the name of the person is "<<name<<endl;
	cout<<"the age of the person is "<<age_mon<<endl;
	return 0;
}