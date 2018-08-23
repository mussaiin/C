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

int d[111111],n;

int sum(int r)
{
	int res=0;
	for (;r>=0; r=(r & (r+1))-1)
		res+=d[r];
	return res;
}

void upd(int r, int delta)
{
	for (; r<n; r=(r | (r+1)))
		d[r]+=delta;
}
	
int x;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen(fname".in","r",stdin);
	freopen(fname".out","w",stdout);
	#endif
	cin >> n;
	for (int i = 0;i < n;i ++)
	{
		cin >> x;
		upd(i, x);
	}
	for (int i = 0;i < n;i ++)
		cout << i << " " <<  sum(i)<< endl;
	return 0;
}
