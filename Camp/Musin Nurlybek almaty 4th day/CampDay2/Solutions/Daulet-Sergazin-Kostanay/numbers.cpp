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

int a[1010][1010],ans=0,n;

using namespace std;

int main()
{
freopen("numbers.in","r",stdin);
freopen("numbers.out","w",stdout);
cin>>n;
FOR(i,1,9)
a[1][i]=1;

FOR(i,2,n)
{
	FOR(j,0,9)
	{
		FOR(o,0,9)
		{
			if(abs(j-o)<=1){a[i][j]+=a[i-1][o];}
		}
	}
}
FOR(i,0,9)
{
	ans+=a[n][i];
}
cout<<ans;
return 0;
}


