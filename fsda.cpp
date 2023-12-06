#include<iostream>
using namespace std;
int main()
{
	struct abc
	{
		char name[45];
		int s1,s2,s3,s4;
		
	};
	abc st01={"wahid ali",33,44,55,66};
	int total;
	total=st01.s1+st01.s2+st01.s3+st01.s4;
	cout<<"enter the name of the person ? ";
	cin>>st01.name;
	cout<<"enter the marks of the first subject ? ";
	cin>>st01.s1;
	cout<<"enter the marks of the second marks ? ";
	cin>>st01.s2;
	cout<<"enter the marks of the third marks ? ";
	cin>>st01.s3;
	cout<<"enter the marks of the fourth marks ? ";
	cin>>st01.s4;
	cout<<"total : "<<total<<endl;
	return 9;
	
}