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
int i,n,l,r,a,b,mini=INF,ind;
bool used[MAXN];
vector <int> d;
vector <int> c;
void dfs(int v,int depth)
{
	used[v]=1;
	d.push_back(v);
	c.push_back(depth);
	if(v*2<=n&&used[v*2]==0)
	{
		dfs(v*2,depth+1);
		d.push_back(v);
		c.push_back(depth);
	}
	if(v*2+1<=n&&used[v*2+1]==0)
	{
		dfs(v*2+1,depth+1);
		d.push_back(v);
		c.push_back(depth);
	}
}
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin>>n>>a>>b;
	dfs(1,0);
	for(i=0;i<d.size();i++)
		if(d[i]==a)
		{
			l=i;
			break;
		}
	for(i=0;i<d.size();i++)
		if(d[i]==b)
		{
			r=i;
			break;
		}
	if(r<l)swap(l,r);
	for(i=l;i<=r;i++)if(mini>c[i])mini=c[i],ind=i;
	cout<<d[ind];
	return 0;
}	