#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int r=1;
	clrscr();
	while(!kbhit())
	{
		gotoxy(30,r);
		cout<<"welcome \a";
		gotoxy(30,r);
		r++;
		if(r==24) r=1;
	}
}