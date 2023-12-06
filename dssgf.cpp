#include<iostream>
using namespace std;
struct abc
{
	char name[43];
	int age;
	
};
int main()
{
	abc s1,s2,t;
	int i;
	cout<<"enter the name of the student ? ";
	cin>>s1.name;
	cout<<"enter the age of the student ? ";
	cin>>s1.age;
	t.age=s1.age;
	s2.age=s1.age;
	s1.age=t.age;
	for(i=0;s1.name[i]!='\0';i++)
	t.name[i]=s1.name[i];
	t.name[i]='\0';
	for(i=0;s1.name[i]!='\0';i++)
	s2.name[i]=s1.name[i];
	s2.name[i]='\0';
	for(i=0;s1.name[i]!='\0';i++)
	s1.name[i]=t.name[i];
	s1.name[i]='\0';
	cout<<"name : "<<s2.name<<endl;
	cout<<"age : "<<s2.age<<endl;
	return 0;
}