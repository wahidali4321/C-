#include<iostream>
using namespace std;
int main()
{ 
struct rec{
	char name[44];
	int s1,s2,s3,s4;
};
rec st01={"wahid ali ",33,44,55,66};
int total;
total=st01.s1+st01.s2+st01.s3+st01.s4;
cout<<"name of the student "<<endl;
cin>>st01.name;
cout<<"marks of the first subject ";
cin>>st01.s1;
cout<<"marks of the second subject ";
cin>>st01.s2;
cout<<"marks of the third subject ";
cin>>st01.s3;
cout<<"marks of the fourth subject ";
cin>>st01.s4;
cout<<"the total marks is equal to "<<total<<endl;
return 0;}
