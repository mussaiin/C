#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <numeric>
#include <vector>
#include <math.h>
#include <algorithm>

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define REV_FOR(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define f first
#define s second

using namespace std;

int a[1000000];
int n,mx=(-1)*10^9;

main()
{
freopen("sequence.in","r",stdin)
freopen("sequence.out","w",stdout);
cin>>n;
FOR(i,1,n)
	{
	cin>>a[i];
	}
FOR(i,1,n)
	{
	int c=0;
	FOR(j,i,n)
		{
		if(a[j]%a[i]==0)
			{
			c++;
			}
		}
	if(c>mx)
		{
		mx=c;
		}
	}
cout<<mx;
}

