#include<iostream>
using namespace std;
int main()
{
	int age;
	long int age_mon;
	char name[59];
	cout<<"enter the name of the person that you want to show ";
	cin>>name;
	cout<<"enter the age of the person that you want to show ";
	cin>>age;
	age_mon=age*12;
	cout<<"the name of the person that you were want to show "<<name<<endl;
	cout<<"the age of the person that you want to show "<<age_mon<<endl;
	return 0;
}