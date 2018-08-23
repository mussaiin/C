#include <iostream>
#include <iomanip>
#include <cstdlib>
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
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define sz size()
#define _USE_MATH_DEFINES
#define ll long long 
#define ull unsigned long long  
#define fname ""
const int  MAXN = (int)1e6 + 123;
const double eps = 1e-6;
const long long INF = 1000000000000000000ll;

using namespace std;
int n,m,l,r,pr[MAXN],test,a,b,up[MAXN][40],t_in[MAXN],t_out[MAXN],timer,lg;
vector < int > t[MAXN];
void dfs(int v)
{
	t_in[v] = timer ++;
	for (int i = 0;i < t[v].sz;i ++)
		if (!t_in[t[v][i]])
			dfs(t[v][i]);	
	t_out[v] = timer ++;
}
int log_2(int x)
{
	int pw = 1,num = 0;
	while(pw * 2 <= x)
	{
		pw *= 2;
		num ++;
	}	
	return num;
}
bool upper(int x,int v)
{
	if (t_in[x] <= t_in[v] && t_out[x] >= t_out[v])
		return 0;
	return 1;
}
int find_lca(int a,int b)
{
	int v = a;
	for (int l = lg;l >= 0;l --)
		if (upper(up[a][lg] , b))
			v = up[a][lg];
	return pr[v];
}
int main()
{
	freopen(fname".in","r",stdin);
	freopen(fname".out","w",stdout);
	cin >> n >> m;
	lg = log_2(n);
	for (int i = 1;i <= m;i ++)
	{
		cin >> l >> r;
		pr[r] = l;
		t[l].pb(r);
	}
	pr[1] = 1;
	for (int j = 0;j <= 25;j ++)
		for (int i = 1;i <= n;i ++)
		{
			if (j == 0)
				up[i][j] = pr[i];
			else
				up[i][j] = up[up[i][j - 1]][j - 1];
		}
	dfs(1);
	cin >> test;
	for (int i = 1;i <= test;i ++)
	{
		cin >> a >> b;
		if (t_in[a] <= t_in[b] && t_out[a] >= t_out[b])
			cout << a << endl;
		else if(t_in[b] < t_in[a] && t_out[b] > t_out[a])
			cout <<< b << endl;
		else 
			cout << find_lca(a , b) << endl;
	}
	return 0;
}
