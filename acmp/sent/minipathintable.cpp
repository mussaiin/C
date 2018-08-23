#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
int a[30][30], b[30][30], c[30][30], n, m;
cin>>n>>m;
for(int i=1; i<=n; i++)
{            
	for(int j=1; j<=m; j++)
	{
		cin>>a[i][j];
	}
}
for(int i=1; i<=n; i++)
{
	b[i][1]=b[i-1][1]+a[i][1];
}
for(int i=1; i<=m; i++)
{
	b[1][i]=b[1][i-1]+a[1][i];
}
for(int i=2; i<=n; i++)
{
	for(int j=2; j<=m; j++)
	{
		b[i][j]=min(b[i-1][j],b[i][j-1])+a[i][j];
	}
}
cout<<b[n][m];
return 0;
}  
