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

	int s1[1100],s2[1100];
	int a[1100][1100];

main()
{
freopen("lcs.in","r",stdin)
freopen("lcs.out","w",stdout);
	int n,m;
	cin>>n;
	FOR(i,0,n-1)
		{
		cin>>s1[i];
		}
		
	cin>>m;
	FOR(i,0,m-1)
		{
		cin>>s2[i];
		}

	FOR(i,0,n-1)
		{
		FOR(j,0,m-1)
			{
			if(i==0 && j==0)
				{
				a[i][j]=0;
				}
			else if(s1[i]!=s2[j])
				{
				a[i][j]=a[i-1][j-1]+1;
				}
			else if(s1[i]==s2[j])
				{
				a[i][j]=max(a[i-1][j],a[i][j-1]);
				}
			}
		}
	cout<<a[n-1][m-1];
}

