#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long
using namespace std;  
long long n, m, a, b, c;
int  i, j;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b>>c;
	if (a==0 && b==0 && c==0)
	{
		 	cout<<0;
	return 0;
	}
	if(a==0){ goto l; } cout<<a; 
	l:;
	if(b==0){ goto b; }
	if(b==-1){ cout<<"-x"; goto b; }
	if(b==1 && a!=0){ cout<<"+x"; }
	if(b==1 && a==0){ cout<<"x"; }
/////////////////////////////////////////////////////////////////////////////////////// 
	if(b>0 &&  a!=0 && b!=1)
	{    	
		cout<<"+"<<b<<"x";
	}
	if(b>0 &&  a==0 && b!=1)
	{
		cout<<b<<"x";
	}
/////////////////////////////////////////////////////////////////////////////////////// 
	if(b<0){ cout<<b<<"x"; }
	b:;
	if(c==0){ return 0; }
	if(c==-1){ 
		cout<<"-y";
	return 0;
	}
	if(c<0)
	{
		cout<<c<<"y";
	return 0;
	}
///////////////////////////////////////////////////////////////////////////////////////  
	if(c==1 && b==0 && a==0)
	{
		cout<<"y";
	return 0; 
	}
	if(c>0 && c!=1 && b!=0 && a!=0)
	{
		cout<<"+"<<c<<"y";
	return 0;
	}
	if(c>0 && c!=1 && b==0 && a!=0)
	{
		cout<<"+"<<c<<"y";
	return 0;
	}
	if(c>0 && c!=1 && b!=0 && a==0)
	{
		cout<<"+"<<c<<"y";
	return 0;
	}
///////////////////////////////////////////////////////////////////////////////////////  
if(c>0 && c!=1 && b==0 && a==0)
{
	cout<<c<<"y";
return 0;
}
if(c==1 && b!=0 || a!=0)
	cout<<"+"<<"y";
return 0;
}