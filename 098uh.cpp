#include<iostream>
using namespace std;
int main()
{
	float avg;
	char name[15];
	int total, eng,urdu,cs;
	cout<<"enter the name of the person ? ";
	cin>>name;
	cout<<"enter the marks of english paper ? "<<endl;
	cin>>eng;
	cout<<"enter the marks of urdu paper ? "<<endl;
	cin>>urdu;
	cout<<"enter the marks of cs paper "<<endl;
	cin>>cs;
	total=eng+urdu+cs;
	avg=total/3;
	cout<<"the name of the person ?  "<<name<<endl;
	cout<<" the total marks of the person ? "<<total<<endl;
	cout<<"the average of the total marks ? "<<avg<<endl;
	
}