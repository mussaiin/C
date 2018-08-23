#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <vector>
#include <cstdio>
#include <new>
#include <ctime>
using namespace std;
long long a[2000][2000]={0},m,n,b[2000][2000]={9999999},x,y,kol=0;
struct az
{
	int x,y;
};
vector <az>xs(20000);
int main()
{
	freopen("pdd.in","r",stdin);
	freopen("pdd.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	b[1][1]=a[1][1];
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (j==1 && i!=1)
			{
				b[i][j]=b[i-1][j]+a[i][j];
			}
			if (i==1 && j!=1)
			{
				b[i][j]=b[i][j-1]+a[i][j];
			}
			if (j!=1 && i!=1)
			{
				b[i][j]=min(b[i-1][j],b[i][j-1])+a[i][j];
			}
		}


	}
	cout<<b[n][m]<<"\n";
	x=n;
	y=m;
//	xs.clear();
	kol++;
	xs[kol].x=x;
	xs[kol].y=y;
	
//	cout<<xs.size()<<"\n";
//	return 0;
	while (x>1 || y>1)
	{
//		cout<<x<<" "<<y<<" "<<kol<<"\n";
//		system ("pause");
		if (x==1 && y==1)
		break;
		if (y==1)
		{
			x--;
			kol++;
			xs[kol].x=x;
			xs[kol].y=y;
		}
		else if (x==1)
		{
			y--;
			kol++;
			xs[kol].x=x;
			xs[kol].y=y;
		}       /* */
		else if (min(b[x-1][y],b[x][y-1])==b[x-1][y])
		{
			x--;
			kol++;
			xs[kol].x=x;
			xs[kol].y=y;
		}
		else if (min(b[x-1][y],b[x][y-1])==b[x][y-1])
		{
			y--;
			kol++;
			xs[kol].x=x;
			xs[kol].y=y;
		}
	}
//	system ("pause");
	cout<<kol<<"\n";
//	system ("pause");
	for (int i=kol;i>=1;i--)
	{
		cout<<xs[i].x<<" "<<xs[i].y<<"\n";
	}
	return 0;
}