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
int a[199999999];
long long n;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
a[1]=1;
a[2]=1;
a[3]=2; 
a[4]=3;
a[5]=5;
cin>>n;
if(n==2){	cout<<1<<endl<<3; return 0; }
if(n==3){ cout<<1<<endl<<4; return 0; }
if(n==5){ cout<<1<<endl<<5; return 0; }
for(int i=5; i<=n; i++)
{
	a[i]=a[i-1]+a[i-2];
	if(a[i]==n) 
	{
		cout<<1<<endl;
		cout<<i;
	return 0;
	}
	if(a[i]>n){ break; }
}
cout<<0;
return 0;
}