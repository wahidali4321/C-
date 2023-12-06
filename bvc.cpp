#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter any value "<<endl;
	cin>>n;
	switch(n%2)
	{
		case 0:
		cout<<"divisble by 2 "<<endl;
		break;
		case 1:
			cout<<"not divisble by 2 "<<endl;
			break;
	}
	cout<<"okay "<<endl;
	return 0;
}