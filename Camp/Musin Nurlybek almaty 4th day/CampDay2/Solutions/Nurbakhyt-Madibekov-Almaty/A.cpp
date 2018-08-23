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
#define fname "sequence"
const int  MAXN=1200;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;

using namespace std;
int n,i,j;
ll a[MAXN],maxi,d[MAXN],ans;
int main()
{
	freopen(fname".in","r",stdin);
	freopen(fname".out","w",stdout);
	scanf("%d",&n);
	
	for(i = 1;i <= n;i ++)
		scanf("%lld",&a[i]);
	
	for(i = 1;i <= n;i ++)
	{
		maxi=0;
		for(j = 1;j < i;j ++)
		{
			if(a[j]!=0 && a[i] % a[j] == 0 && maxi < d[j])maxi=d[j];
		}
		d[i]=maxi+1;
		if(ans < d[i])ans = d[i];
	}
	printf("%lld",ans);
	return 0;
}
