#include <iostream>
using namespace std;
int main(){
int a,b; 
char c;
cin>>a>>c>>b;
if (c=='+')
{
	cout<<a+b;
	return 0;
}
if (c=='-')
{
	cout<<a-b;
	return 0;
}
if (c=='/')
{
	cout<<a/b;
	return 0;
}
if (c=='*')                 
{
	cout<<a*b;
	return 0;
}

system ("pause");
return 0;}