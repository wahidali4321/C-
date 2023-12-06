#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter the first and second number ? ";
	cin>>a>>op>>b;
	switch(op)
	{
		case'+':
			cout<<"additon = "<<(a+b);
			break;
			case'-':
				cout<<"subtraction = "<<(a-b);
				break;
				
	}
	return 0;
}