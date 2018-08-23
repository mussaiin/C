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
#define fname "lcs"
const int  MAXN=1200;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;

using namespace std;
int n,m,d[MAXN][MAXN],a[MAXN],b[MAXN],i,j;
int main()
{
	freopen(fname".in","r",stdin);
	freopen(fname".out","w",stdout);
	
	scanf("%d",&n);
	for(i = 1;i <= n;i ++)
		scanf("%d",&a[i]);
	
	scanf("%d",&m);
	for(i = 1;i <= m;i ++)
		scanf("%d",&b[i]);
	
	for(i = 1;i <= n;i ++)
	{
		for(j = 1;j <= m;j ++)
		{
			if(a[i] == b[j])d[i][j] = d[i-1][j-1] + 1;
			else d[i][j] = max(d[i-1][j],d[i][j-1]);
		}
	}	
	printf("%d",d[n][m]);
	return 0;
}
