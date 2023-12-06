#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	char pass[10];
	cout<<"enter the ten long character ? "<<endl;
	for(i=0;i<=9;i++)
	pass[i]=getch();
	pass[i]='\0';
	cout<<"\n you have entered the name ? "<<pass;
	getch();
	
}