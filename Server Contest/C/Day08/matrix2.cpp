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
int n, m, a[150][150], x, y;
bool used[1050];
void dfs(int v)
{
 	used[v]=true;
 	for(int i=1; i<=n; i++)
 	{
	 	if(a[v][i]>0 && used[i]==false) 
 		{
 			dfs(i);
 		}
 	}
}
int main()
{
freopen ("matrix2.in","r",stdin);
freopen ("matrix2.out","w",stdout); 
cin>>n>>m;
for(int i=1; i<=m; i++)
{
 	cin>>x>>y;
	a[x][y]=1;
	a[y][x]=1;
 	used[i]=false; 	
}
int ans=0;
for(int i=1; i<=n; i++)
{
 	if(used[i]==false)
 	{
 		ans++;
 		dfs(i);
 	}
}
cout<<ans<<endl;
return 0; 
}  
