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
long long m,n;
map <int,int> b[60];
int main()
{
	freopen("knight2.in","r",stdin);
	freopen("knight2.out","w",stdout);
	cin>>n>>m;
	b[1][1]=1;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			if (i-1>=1 && j-2>=1)
			b[i][j]+=b[i-1][j-2];
			if (i-2>=1 && j-1>=1)
			b[i][j]+=b[i-2][j-1];
			if (i-2>=1 && j+1<=m)
			b[i][j]+=b[i-2][j+1];
			if (i+1<=n && j-2>=1)
			b[i][j]+=b[i+1][j-2];
		}
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=m;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<b[n][m]; 	
	return 0;
}
