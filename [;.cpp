#include<iostream>
using namespace std;
int main()
{
	struct rec
	{
		char name[15];
		int s1,s2,s3,s4;
	};
	rec st01={"marriam ",44,55,66,77};
	int total;
	total=st01.s1+st01.s2+st01.s3+st01.s4;
	cout<<"name of the student : "<<st01.name<<endl;
	cout<<"marks in subject 1 : "<<st01.s1<<endl;
	cout<<"marks in subject 2 : "<<st01.s2<<endl;
	cout<<"marks in subject 3 : "<<st01.s3<<endl;
	cout<<"marks in subject 3 :"<<st01.s4<<endl;
	cout<<"total marks = "<<total;
	return 9;
}

