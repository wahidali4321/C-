#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;
int main()
{
	 char str[15]="pakistan ";
	 int i,l,c;
	 gotoxy(32,1);
	 cout<<str;
	 for(i=0;str[i]!='\0';i++)
	 {
	 	for(i=1;i<=22;i++)
	 	{
	 		gotoxy(i+32.1);
	 		cout<<str[i];
	 		delay(50);
	 		gotoxy(i+32,1);
	 		cout<<" ";
	 		
		 }
		 gotoxy(i+32.1);
		 cout<<str[i];
	 }
}