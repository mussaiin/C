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
long long a[2000][2000]={0},m,n,b[2000][2000]={0},x,y,used[2000][2000];
queue <int> xs,ys;
int main()
{
	freopen("knight2.in","r",stdin);
	freopen("knight2.out","w",stdout);
	cin>>n>>m;
	b[1][1]=1;
	xs.push(1);
	ys.push(1);
	while (xs.size())
	{
		x=xs.front();
		y=ys.front();
//		cout<<x<<" "<<y<<"\n";
		xs.pop();
		ys.pop();
		if (!used[x][y])
		{
			
			used[x][y]=1;
			if (x+2<=n && y+1<=m)
			{
				b[x+2][y+1]+=b[x][y];
				xs.push(x+2);
				ys.push(y+1);
			}
			if (x+1<=n && y+2<=m)
			{
				b[x+1][y+2]+=b[x][y];
				xs.push(x+1);
				ys.push(y+2);
			}
			if (x+2<=n && y-1>=1)
			{
				b[x+2][y-1]+=b[x][y];
				xs.push(x+2);
				ys.push(y-1);
			}
			if (x-1>=1 && y+2<=m)
			{
				b[x-1][y+2]+=b[x][y];
				xs.push(x-1);
				ys.push(y+2);
			}
		}
		
	}
		xs.push(1);
	ys.push(1);
	while (xs.size())
	{
		x=xs.front();
		y=ys.front();
//		cout<<x<<" "<<y<<"\n";
		xs.pop();
		ys.pop();
			
			used[x][y]=1;
			if (x+2<=n && y+1<=m)
			{
				b[x+2][y+1]+=b[x][y];
				xs.push(x+2);
				ys.push(y+1);
			}
			if (x+1<=n && y+2<=m)
			{
				b[x+1][y+2]+=b[x][y];
				xs.push(x+1);
				ys.push(y+2);
			}
			if (x+2<=n && y-1>=1)
			{
				b[x+2][y-1]+=b[x][y];
				xs.push(x+2);
				ys.push(y-1);
			}
			if (x-1>=1 && y+2<=m)
			{
				b[x-1][y+2]+=b[x][y];
				xs.push(x-1);
				ys.push(y+2);
			}
		
	}

	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}/* */

	cout<<b[n][m]<<"\n";
	return 0;
}
