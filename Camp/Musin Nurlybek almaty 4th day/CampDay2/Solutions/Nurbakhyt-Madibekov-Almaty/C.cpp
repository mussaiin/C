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
#define fname "numbers"
const int  MAXN=1000*1000;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;

using namespace std;
int n,i,j;
ll d[30][20],ans,x,y,z;
int main()
{
	freopen(fname".in","r",stdin);
	freopen(fname".out","w",stdout);
	scanf("%d",&n);
	for(i = 1;i <= 9;i ++)
		d[1][i]=1;
	
	for(i = 2;i <= n;i ++)
	{
		for(j = 0;j <= 9;j ++)
		{
			x=0;
			y=0;
			z=0;
			if(j-1 > 0)x = d[i-1][j-1];
			if(j-1 == 0 && i-1 > 1)x = d[i-1][j-1];
			if(j > 0)y = d[i-1][j];
			if(j == 0 && i-1 > 1)y = d[i-1][j];
			if(j+1 < 10)z = d[i-1][j+1];
			d[i][j]=x + y + z;
		}
	}
	for(i = 0;i <= 9;i ++)
		ans+=d[n][i];

	printf("%lld",ans);
	return 0;
}
