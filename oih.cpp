#include<iostream>
using namespace std;
int main()
{
	char first[7]={'w','a','h','i','d','a','l'}, second[7];
	int c;
	// copy value from first to seocn d
	for(c=0;c<=6;c++)
	second[c]=first[c];
	// print value from first to second ? 
	for(c=0;c<=6;c++)
	cout<<second[c];
}