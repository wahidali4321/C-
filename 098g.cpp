#include<iostream>
using namespace std;
int main()
{
	float avg;
	int  total,english,urdu,computer;
	char name[40];
	cout<<"enter the name of the person ? "<<endl;
	cin>>name;
	cout<<"enter the marks of the english ? "<<endl;
	cin>>english;
	cout<<"enter the marsk of the urdu ? "<<endl;
	cin>>urdu;
	cout<<"enter the marks of the computer sciecne ? "<<endl;
	cin>>computer;
	total=english+urdu+computer;
	avg=total/3.0;
	cout<<"the name of the person ? "<<name<<endl;
	cout<<"the total marks of the person ? "<<total<<endl;
	cout<<"the average of the total paper ? "<<avg<<endl;
	return 0;
}