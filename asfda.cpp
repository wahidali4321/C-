#include<iostream>
using namespace std;
int main()
{
	struct abc
	{
		char name[44];
		int s1,s2,s3,s4;
	};
	abc st01={"wahid ",33,44,55,66};
	int total;
	total=st01.s1+st01.s2+st01.s3+st01.s4;
	cout<<"enter the first name ? ";
	cin>>st01.name;
	cout<<"enter the marks of 1st subject ? ";
	cin>>st01.s1;
	cout<<"enter the marks of 2nd subject ? ";
	cin>>st01.s2;
	cout<<"enter the marks of the 3rd subject ? ";
	cin>>st01.s3;
	cout<<"enter the marks of the 3rd subject ? ";
	cin>>st01.s4;
	cout<<"the total marks of the overall subjects ? "<<total<<endl;
	return 0;
	
}