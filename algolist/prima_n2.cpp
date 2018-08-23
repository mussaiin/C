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
const int  MAXN=5000 + 123;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;

using namespace std;
int id,n,now;
bool used[MAXN];
double x[MAXN],y[MAXN],sum,min_e[MAXN];
double dist(int l,int r)
{
	return sqrt((x[l] - x[r]) * (x[l] - x[r]) + (y[l] - y[r]) * (y[l] - y[r]));
}
int main()
{
//	freopen(fname".in","r",stdin);
//	freopen(fname".out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i ++)
	{
		cin >> x[i] >> y[i];
		min_e[i] = INF;
	}
	min_e[1] = 0;
	for (int i = 1;i <= n;i ++)
	{
		now = -1;
		for (int j = 1;j <= n;j ++)
		{
			if (!used[j] && (now == -1 || min_e[j] < min_e[now]))
				now = j;
		}
		used[now] = 1;
		sum += min_e[now];
		for (int i = 1;i <= n;i ++)
		{
			if (dist(now,i) < min_e[i])
				min_e[i] = dist(now,i);
		}
	}
	printf("%.12f",sum);
	return 0;
}
