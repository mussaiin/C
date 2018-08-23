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
struct node
{
	int a,b,c;
}g[9000];
long long int i,n,m,cost,h,k,p[300];
int dsu_get (int v) 
{
	return (v == p[v]) ? v : (p[v] = dsu_get (p[v]));
}
void dsu_unite (int a, int b) 
{
	if (rand() & 1)swap (a, b);
	if (a != b)p[a] = b;
}
bool cmp(node x,node y)
{
	if(x.c<y.c)return 1;
	return 0;
}
int main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	cin>>n>>m;
	for(i=0;i<m;i++)cin>>g[i].a>>g[i].b>>g[i].c;
	sort (g,g+m,&cmp);
	for (i=1; i<=n; ++i)p[i] = i;
	for (i=0; i<m; ++i) 
	{
		h=dsu_get(g[i].a);
		k=dsu_get(g[i].b);
		if (h != k) 
		{
			cost += g[i].c;
			dsu_unite (h, k);
		}	                              
	}
	cout<<cost;
	return 0;
}