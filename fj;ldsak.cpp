#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void cal(int , char, int );
	int n1, n2;
	char op;
	cout<<"enter the 1st value , operand & 2nd value ? "<<endl;
	cin>>n1>>op>>n2;
	cal(n1, op,n2);
	getch();
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
 					case'/':
 						cout<<x/y;
 						break;
 						default:
 							cout<<"the equation you written is incorrect ? ";
 						
	 }
 }