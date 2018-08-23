#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <deque>
const long long int INF=1000*1000*1000;
const int MAXN=100*10;
using namespace std;
int n,a[MAXN][MAXN],i,j,d[MAXN],low[MAXN];
void dfs(int x,int parent)
{
	for(i=0;i<n;i++)	
	{
		if(a[x][i]==1)
		{
			if(d[i]==0)
			{
				d[i]=i+1;
				low[i]=min(low[x],d[i]);
				dfs(i,x);
			}
		}
	}
}
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	dfs(1,0);
	return 0;
}	