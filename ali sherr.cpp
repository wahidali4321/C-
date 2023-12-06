#include<iostream>
using namespace std;
int main()
{
	int s,n;
	s=0;
	n=1;
	while(n<=100)
	{
		s=s+n;
		cout<<n<<endl;
		n=n+2;
	}
	cout<<"the sumation of first hundred number is ? "<<s;
}