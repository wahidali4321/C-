#include<iostream>
using namespace std;
int main()
{
	char first[7]={'w','a','h','i','d','a','l'}, second[7];
	int c;
	
	// copy from first to scond 
	for(c=0;c<=6;c++)
	
	second[c]=first[c];
	// print value form first to second ? 
	for(c=0;c<=4;c++)
	cout<<second[c];
}