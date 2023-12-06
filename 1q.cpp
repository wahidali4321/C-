#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter the first and second number ? ";
	cout<<"press enter anu key "<<endl;
	cin>>a>>op>>b;
	switch(op)
	{
		case '+':
			cout<<"addition = "<<(a+b);
			break;
			case'-':
				cout<<"subtraction = "<<(a-b);
				break;
				default:
					cout<<"invalid - input ";
					
	}
	return 9;
}