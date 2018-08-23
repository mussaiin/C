#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
long long a[200][200],n,b,c,m,bb[200];
int main()
{
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=m;i++)
	{
		cin>>b>>c;
		a[b][c]=1;
		a[c][b]=1;
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (i!=j && a[i][j] && a[j][i])
			{
				continue;
			}
			if (i==j)
			continue;
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;	
}