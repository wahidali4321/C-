#include<iostream>
using namespace std;
int main()
{
	struct rec
	{char name[44];
	int s1,s2,s3,s4;
		
	};
	rec st01={"wahid ali ",44,55,66,88};
	int total;
	total=st01.s1+st01.s2+st01.s3+st01.s4;
	cout<<"enter the name of the person ";
	cin>>st01.name;
	cout<<"enter the marks of the first subject ";
	cin>>st01.s1;
	cout<<"enter the marks of the second subject ";
	cin>>st01.s2;
	cout<<"enter the marks of the third subject ";
	cin>>st01.s3;
	cout<<"enter the marks of the fourth subject ";
	cin>>st01.s4;
	return 0;
}