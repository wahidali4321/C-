#include<iostream>
using namespace std;
struct address
{
	char city[44];
	int pcode;
	
};
int main()
{
	address taq;
	cout<<"enter the name of city "<<endl;
	cin>>taq.city;
	cout<<"enter the postal code of the city "<<endl;
	cin>>taq.pcode;
	cout<<"the output of the reslut is "<<endl;
	cout<<"the name of the city is "<<taq.city<<endl;
	cout<<"the postal code of the city is "<<taq.pcode<<endl;
	return 0;
	
}