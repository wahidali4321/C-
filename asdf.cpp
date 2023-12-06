#include<iostream>
using namespace std;
struct abc
{
	char s_name[15];
	int sub[4];
	int total;
	
};
int main()
{
	abc result;
	int i,j,total;
	cout<<"enter the student name ? ";
	cin>>result.s_name;
	for(i=0;i<=3;i++)
	{
	
	cout<<"enter marks of subject ? "<<i+1<<"=";
	cin>>result.sub[i];
	}
	result.total=result.sub[0]+result.sub[1]+result.sub[2]+result.sub[3];
	cout<<"output"<<endl;
	cout<<"name of the student ? "<<result.s_name<<endl;
	for(i=0;i<=3;i++)
	{cout<<"marks of subject ? "<<i+1<<":"<<result.sub[i]<<endl;
	}
	cout<<"total marks : "<<result.total;
	return 0 ;
}