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
#define ll long long
#define pb push_back
#define f first
#define s second
#define mp make_pair
#define sz size()
#define _USE_MATH_DEFINES
#define ll long long 
#define ull unsigned long long  
#define F first
#define S second
#define fname ""
const int  MAXN=1000*1000;
const double eps=1e-6;
const long long INF = 1000000000ll;

//min na otrezke
// update na otrezke

using namespace std;

int n,m,a[MAXN],l,r,x,pw;
string s;
struct tree
{
	int a,x;
	bool flag;
}t[4 * MAXN];

void build(int tl,int tr,int v)
{
	if (tl == tr)
	{
		t[v].a = a[tl];
		return;	
	}
	int tm = (tl + tr)/2;
	build(tl , tm , v * 2);
	build(tm + 1 , tr , v * 2 + 1);
	t[v] = min(t[v * 2].a , t[v * 2 + 1].a);
}

void push(int x,int v)
{
	t[v].x = x;
	t[v].flag = 1;
}
void update(int tl,int tr,int l,int r,int x,int v)
{
	if (l > tr || r < tl)
		return;
	if (l >= tr && r <= tr)
	{
		t[v].a = x;
		push(x , v * 2);
		push(x , v * 2 + 1);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 1;i <= n;i ++)
		cin >> a[i];
	pw = 1;
	while(pw < n)
		pw *= 2;
	for (int i = n + 1;i <= pw;i ++)
		a[i] = INF;
	build(1 , pw , 1);
	for (int i = 1;i <= m;i ++)
	{
		cin >> s;
		if (s == "Update")
		{
			cin >> l >> r >> x;
			update(1 , pw , l , r , x , 1);
		}
		else
		{
			cin >> l >> r;
			cout << "Min from " << l << " to " << r << " is " << get(1 , pw , l , r);	
		}				
	}	
	return 0;
}