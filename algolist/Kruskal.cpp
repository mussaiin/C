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

struct po
{
	int a,b,x;
}a[MAXN];
int n,m,i,s[MAXN],l,r,ans,k;
bool cmp(po t,po y)
{
	return t.x<y.x;
}
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++)s[i]=i;
	for(i=0;i<m;i++)cin>>a[i].a>>a[i].b>>a[i].x;
	sort(a,a+m,&cmp);
	for(i=0;i<m;i++)
	{
		if(min(s[a[i].a],s[a[i].b])==s[a[i].b])swap(a[i].a,a[i].b);
		l=a[i].a;
		while(l!=s[l])l=s[l];
		r=a[i].b;
		while(r!=s[r])r=s[r];
		if(l!=r)
		{
			r=a[i].b;
			while(r!=s[r])
			{
				k=r;
				r=s[r];
				s[k]=s[a[i].a];
			}
			s[r]=s[a[i].a];
			ans+=a[i].x;
		}
	}
	cout<<ans;
	return 0;
}	