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
const int MAXN=1000*1000;
using namespace std;
set < pair<int,int> > q;
int i,j,x,n,s,f,a[500][500],d[MAXN];
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin>>n>>s>>f;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for (i = 1;i <= n;i ++)
		d[i] = INF;
	d[s]=0;
	q.insert(make_pair(0,s));
	while(!q.empty())
	{
		x=q.begin()->second;
		q.erase(q.begin());
		for(i=1;i<=n;i++)
		{
			if(a[x][i]!=-1&&d[i]>d[x]+a[x][i])
			{
				q.erase(make_pair(d[i],i));
				d[i]=d[x]+a[x][i];
				q.insert(make_pair(d[i],i));
			}
		}
	}
	if(d[f]==INF)cout<<"-1";
	else cout<<d[f];
	return 0;
}	