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
#define fname "dust"
const int  MAXN=1200;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;

using namespace std;
struct num
{
	double v,w,k;
}a[MAXN];
int N,W,i,last,r,ind;
double d[MAXN];
bool cmp(num x,num y)
{
	return x.k>y.k;
}
int main()
{
	freopen(fname".in","r",stdin);
	freopen(fname".out","w",stdout);
	cin>>N>>W;
	r=W;	
	for(i = 1;i <= N;i ++)
	{
		cin>>a[i].v>>a[i].w;
		a[i].k=a[i].v/a[i].w;
	}
	sort(a+1,a+N+1,&cmp);
	for(i = 1;i <= N && r>0;i ++)
	{
		ind=min(W,int(a[i].w+last));
		d[ind]=max(d[ind],d[last]+a[i].k*(ind-last));
		r-=(ind-last);
		last=ind;
	}
	printf("%.3f",d[W]);
	return 0;
}
