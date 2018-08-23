#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
ll a, i, n, m, j, b;
string s;
int main()
{
freopen ("input.txt","r",stdin);      
freopen ("output.txt","w",stdout);
cin>>s;
if (s[4]=='x' && s[1]=='+') 
{
	a=s[0]-'0';
	b=s[2]-'0';
	cout<<a+b;
return 0;
}
if (s[4]=='x' && s[1]=='-') 
{
	a=s[0]-'0';
	b=s[2]-'0';
	cout<<a-b;
return 0;
}
if (s[0]=='x' && s[1]=='+')
{
	a=s[2]-'0';
	b=s[4]-'0';
	cout<<b-a;            
return 0;
}
if (s[2]=='x' && s[1]=='+')
{
	a=s[0]-'0';
	b=s[4]-'0';
	cout<<b-a;            
return 0;
}
if (s[0]=='x' && s[1]=='-') 
{
	a=s[4]-'0';
	b=s[2]-'0';
	cout<<a+b;
return 0;
}
if (s[2]=='x' && s[1]=='-') 
{    
	a=s[0]-'0';
	b=s[4]-'0';
	cout<<a-b;
return 0;
}
}
