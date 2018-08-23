//by Daulet Sergazin
//#include<brain>
#include<iostream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<stdio.h>
#include<algorithm>
#include<vector>

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define REV_FOR(i,a,b) for(int i=a;i>=b;i--)

int n,a[100000],d[100000],mx=-99999,k;

using namespace std;

int main()
{
freopen("sequence.in","r",stdin);
freopen("sequence.out","w",stdout);
cin>>n;
FOR(i,1,n)
{
	cin>>a[i];
}
k=0;
d[0]=0;
FOR(i,1,n)
{
	FOR(j,1,i-1)
	{
		if(a[i]%a[j]==0){d[i]++;}
	}
}
FOR(i,1,n)
{
	if(d[i]>mx){mx=d[i];}
}
cout<<++mx;
return 0;
}


