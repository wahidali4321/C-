#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char name[15],op;
	int age;
	while(1)
	{
		cout<<"enter name ? ";
		cin>>name;
		cout<<"enter age ? "<<endl;
		cin>>age;
		cout<<"Name = "<<name<<"\n age = "<<age;
		cout<<"more [Y/N] ";
		cin>>op;
		if(op=='y'|| op=='y')
		continue;
		else
		break;
	}
}