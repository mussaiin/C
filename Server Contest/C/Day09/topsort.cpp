#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int n, m, x, z, y, root, i, j, tin[100030], tout[100030], t=0, v, to;
bool used[100010];
vector <int> a[100500], q;
void dfs(int v){
//	cout<<v<<" ";
 	used[v]=true;
 	for(int i=1; i<=a[v].size(); i++)
 	{
	 	if(a[v][i]>0 && used[i]==false) 
 		{
 			 dfs(i);
 		}
 	}
 	tout[v]=t++;
	g[tout[v]].push_back(t);
//cout<<v<<' ';
}
int main()
{
//freopen ("topsort.in","r",stdin);
//freopen ("topsort.out","w",stdout);
cin>>n>>m;
for(int i=1; i<=n; i++)
{
 	for(int j=1; i<=m; j++)
 	{	
 		cin>>x>>y;
 	}
}
cout<<a[t]<<" ";
return 0;     
}
