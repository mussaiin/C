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
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout);

using namespace std;

int d[1100][1100];
int n;

main()
{
freopen("numbers.in","r",stdin)
freopen("numbers.out","w",stdout);
cin>>n;
FOR(i,1,9)
	{
	d[1][i]=1;
	}
d[1][0]=0;

FOR(i,2,n)
	{
	FOR(j,0,9)
		{
		FOR(l,0,9)
			{
			if(abs(j-l)<=1)
				{
				d[i][j]+=d[i-1][l];
				}
			}
		}
	}
int c=0;
FOR(j,0,9)
	{
	c+=d[n][j];
	}
cout<<c;
}

