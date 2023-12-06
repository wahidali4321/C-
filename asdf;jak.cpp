#include<iostream>
using namespace std;
struct address
{
	char city[15];
	int pcode;
};
int main()
{
	address taq;
	cout<<"enter the name ? "<<endl;
	cin>>taq.city;
	cout<<"enter the postal code of city ? "<<endl;
	cin>>taq.pcode;
	cout<<"output from structure "<<endl;
	cout<<"city "<<taq.city<<endl;
	cout<<"postal code  ? "<<taq.pcode<<endl;
	return 0;
	
}