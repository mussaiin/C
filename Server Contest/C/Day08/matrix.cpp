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
freopen ("matrix.in","r",stdin);
freopen ("matrix.out","w",stdout); 
cin>>n;
for(int i=1; i<=n; i++)
{
 	for(int j=1; j<=n; j++)
 	{
 	 	cin>>a[i][j];
 		used[i]=false; 	
 	}
}
int ans=0;
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
cout<<ans;
return 0; 
}  
