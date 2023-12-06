#include<iostream>
using namespace std;
int main()
{
	struct rec
	{
		char name[44];
		int s1,s2,s3,s4;
};
rec st01={"wahid ali ",44,55,66,77};
int total;
total=st01.s1+st01.s2+st01.s3+st01.s4;
cout<<"enter the first marks ? ";
cin>>st01.s1;
cout<<"enter the second marks ? ";
cin>>st01.s2;
cout<<"enter the third marks ? ";
cin>>st01.s3;
cout<<"enter the fourth marks ? ";
cin>>st01.s4;
cout<<"the total marks of the subject is ? "<<total<<endl;
return 9;}