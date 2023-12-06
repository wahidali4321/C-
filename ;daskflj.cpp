#include<iostream>
using namespace std;
int main()
{
	int s,n;
	s=0;
	n=2;
	while(n<100)
	{
		s=s+n;
		cout<<n<<endl;
		n=n+2;
	}
	cout<<"the sum of first 100 even number ? "<<endl;
}