// Solution by AKTL
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <deque>
#include <fstream>
#include <queue>
#include <stack>
#include <vector>
#include <iomanip>
#include <cstdio>
#include <new>
#define MATH_DEFINES
#define INF 99999999
#define pb push_back
#define pf push_front
#define pof pop_front
#define pob pop_back
#define f front
#define b back
using namespace std;
struct az
{
	double a,w,k;
}a[2000];
long long n,l=1;
double ans,we;
bool cmp (az a,az b)
{
	if (a.k==b.k) return a.w>b.w;
	return a.k>b.k;
}
int main()
{
	freopen ("dust.in","r",stdin);
	freopen ("dust.out","w",stdout);
	cin>>n>>we;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].w;
		a[i].k=a[i].a/a[i].w;
	}
	sort (a+1,a+n+1,&cmp);
/*	for (int i=1;i<=n;i++)
	{
		cout<<a[i].a<<" "<<a[i].w<<" "<<a[i].k<<endl;
	}/* */
	
	while (we)
	{
		if (a[l].w>we )
		{
			ans=ans+we*a[l].k;
			we=0;
		}
		if (a[l].w<=we)
		{
			ans+=a[l].a;
			we-=a[l].w;
			a[l].w=0;		
		}
//		cout<<l<<endl;
//		cout<<ans<<endl;
		if (a[l].w)
		{
			continue;
		}
		l++;
	}
	cout<<fixed<<setprecision(3)<<ans;
	return 0;	
}