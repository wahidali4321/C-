#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	void find(int [], int );
	int arr[10], i,n;
	cout<<"enter values into array ? \n";
	for(i=0;i<=4;i++)
	cin>>arr[i];
	cout<<"enter number to find ? ";
	cin>>n;
	find(arr,n);
	getch();
	
}
void find(int x[], int a)
{
	int p=0;
	for(int c=0;c<=9;c++)
	if(a==x[c])
	{
		p=c;
		break;
		
	}
	if(p==0)
	cout<<"number not found ? ";
	else
	cout<<"number found at position ? "<<p+1<<endl;
}