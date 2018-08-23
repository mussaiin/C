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
long long m,n,b[2000][2000]={0},x,y;
//queue <int> xs,ys;
void rec (long long x,long long y) {
    if (x==n && y==m)
    { 
//        cout<<b[n][m]<<"\n";
        exit(0);
        return;                              
    }
 
    if (y+2<=m && x-1>=1) 
    { 
        b[x - 1][y + 2] += b[x][y];
        rec (x - 1, y + 2);
    }
    if (y+2<=m && x+1<=n) 
    {
        b[x + 1][y + 2] += b[x][y];
        rec (x + 1, y + 2);
    }
    if (y+1<=m && x+2<=n) 
    {
        b[x + 2][y + 1] += b[x][y];
        rec (x + 2, y + 1);
    }
    if (y-1>=1 && x+2<=n) 
    {
        b[x + 2][y - 1] += b[x][y];
        rec (x + 2, y - 1);
    }
    b[x][y] = 0; 
    return;
}
int main()
{
	freopen("knight2.in","r",stdin);
	freopen("knight2.out","w",stdout);
	cin>>n>>m;
	b[1][1]=1;
/*	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			
			if (j-2>=1 && i-1>=1)
			{
				b[i][j]+=b[i-1][j-2];
			}
			if (i-2>=1 && j-1>=1)
			{
				b[i][j]+=b[i-2][j-1];
			}
			if (j+1<=n && i-2>=1)
			{
				b[i][j]+=b[i-2][j+1];
			}
			if (i+1<=n && j-2>=1)
			{
				b[i][j]+=b[i+1][j-2];
			}
		}


	}  /* */
	rec(1,1);
/*	for (int i=1;i<=n;i++)
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
