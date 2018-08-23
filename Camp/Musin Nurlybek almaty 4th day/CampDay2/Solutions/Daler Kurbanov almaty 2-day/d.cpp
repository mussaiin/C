// Solution by AKTL
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <deque>
#include <fstream>
#include <queue>
#include <stack>
#include <vector>
#include <iomanip>
#include <cstdio>
#include <new>
#define MATH_DEFINES
#define INF 99999999
#define pb push_back
#define pf push_front
#define pof pop_front
#define pob pop_back
#define f front
#define b back
using namespace std;
long long n,m,a[2000],b[2000],c[2000][2000];
int main()
{
	freopen ("lcs.in","r",stdin);
	freopen ("lcs.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for (int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	c[0][0]=0;
	for (int i=1;i<=n;i++)
	{
		c[i][0]=0;
	}
	for (int i=1;i<=m;i++)
	{
		c[0][i]=0;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (a[i]==b[j])
			{
				c[i][j]=c[i-1][j-1]+1;
			}
			else
			{
				c[i][j]=max(c[i-1][j],c[i][j-1]);
			}
		}
	}
	cout<<c[n][m];
	return 0;	
}