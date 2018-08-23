#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int n, a[150][150];
bool used[1050];
void dfs(int v)
{
 	used[v]=true;
 	for(int i=1; i<=n; i++)
 	{
	 	for(int j=1; j<=n; j++)
	 	{
	 		if(a[v][i]>0 && used[i]==false) 
 			{
 			 	dfs(i);
 			}
 		}
 	}
}
int main()
{
freopen ("tree.in","r",stdin);
freopen ("tree.out","w",stdout); 
cin>>n;
for(int i=1; i<=n; i++)
{
 	for(int j=1; j<=n; j++)
 	{
 	 	cin>>a[i][j];
 	 	a[i][j]=1;
 	 	a[j][i]=1;
 	}
}
dfs(0);
int ans=0, kol=0;
for(int i=1; i<=n; i++)
{
 	for(int j=1; j<=n; j++)
 	{
 		if(used[i]==false)
 		{
 		 	ans++;
 		 	dfs(i);
 		}
 	}
}
ans/=2;
for(int i=1; i<=n; i++)
{
	used[i]=false;
	for(int j=1; j<=n; j++)
 	{
		if(!used[i])
 		{
 			cout<<"NO";
 		return 0;
 		}
 	}
}
cout<<"YES";
return 0; 
}  
