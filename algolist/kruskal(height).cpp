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
#define fname "unionday"
const int  MAXN=1000000;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;

using namespace std;
int n,size,h[MAXN],pr[MAXN];
double x[MAXN],y[MAXN],sum;
struct path
{
	int a,b;
	double c;
}t[MAXN];
bool cmp(path x,path y)
{
	return x.c < y.c;
}
int parent(int v)
{
	if (pr[v] == v)
		return v;
	pr[v] = parent(pr[v]);
	return pr[v];
}
void Union(int a,int b)
{
	if (h[a] <= h[b])
	{
		pr[a] = b;
		if (h[a] == h[b])
			h[b] ++;
	}
	else
		pr[b] = a;
}
int main()
{
//	freopen(fname".in","r",stdin);
//	freopen(fname".out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i ++)
	{
		cin >> x[i] >> y[i];
		pr[i] = i;
		h[i] = i;
	}
	for (int i = 1;i <= n;i ++)
	{
		for (int j = i + 1;j <= n;j ++)
		{
			t[size ++].a = i;
			t[size - 1].b = j;
			t[size - 1].c = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));		
		}
	}
	sort(t , t + size , &cmp);
	for (int i = 0;i < size;i ++)
	{
		int a = parent(t[i].a);
		int b = parent(t[i].b);
		if (a != b)
		{
		    sum += t[i].c;
			Union(a,b);
		}
	}
	printf("%.12f",sum);
	return 0;
}
