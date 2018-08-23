#include <iostream>
using namespace std;
int main()
{
char a;
cin>>a;
if (isalpha(a))
{
	cout<<"letter";
	return 0;
}
if (isdigit(a))
{
	cout<<"digit";
	return 0;
}
if (a=='!' || a==';' || a=='?' || a==':') 
{
	cout<<"punctuation mark"<<endl;
	return 0;
}
else cout<<"special charapter"<<endl;
system ("pause");
return 0;
}

