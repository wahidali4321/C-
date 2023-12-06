#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	 void cal(int , char, int);
	int n1,n2;
	char op;
	cout<<"enter the first integer , operater and enter the second integer ? "<<endl;
	cin>>n1>>op>>n2;
	cal(n1,op,n2);

	}
	void cal(int x, char aop, int y)
	{
		switch(aop)
		{ 
		case'+':
			cout<<x+y;
			break;
			case'-':
				cout<<x-y;
				break;
				case'*':
					cout<<x*y;
					break;
					default:
						cout<<"the condition you have entered is invalid "<<endl;
		}
	}