#include<iostream>
using namespace std;
int main()
{
	int age;
	long int age_month;
	char name[50];
	cout<<"enter the name of the person "<<endl;
	cin>>name;
	cout<<"enter the age of the person in years ? "<<endl;
	cin>>age;
	cout<<"enter the age of person months ? "<<endl;
	cin>>age_month;
	age_month=age*12;
	cout<<"the name of the person is ? "<<name<<endl;
	cout<<"the age of the person is ? "<<age<<endl;
	cout<<"the age of the person in months "<<age_month<<endl;
}