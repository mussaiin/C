#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <cstdio>
#include <new>
#include <ctime>
using namespace std;
long long a[2000][2000]={0},m,n,b[2000][2000]={0},x,y,used[1020][1020];
long long ans(int x,int y)
{
	if (used[x][y])
	return b[x][y];
	used[x][y]=1;
	if (x+1<=n && y-2>=1)
	return b[x][y]=ans(x+1,y-2)+ans(x-1,y-2)+ans(x-2,y-1)+ans(x-2,y+1);
}
int main()
{
//	freopen("knight2.in","r",stdin);
//	freopen("knight2.out","w",stdout);
        cin>>n>>m;
        for (int i=2;i<=m;i++)
        {
                used[1][i]=1;
        	b[1][i]=0;
        }
        b[1][1]=1;
        used[1][1]=1;
        ans(n,m);
        for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}/* */

        cout<<b[n][m];
	return 0;
}
