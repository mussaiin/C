#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int n, m, x, z, y, root, i, j, tin[100030], tout[100030], t=0, v, to;
bool used[100010];
vector <int> a[100010];
void dfs(int v){
//	cout<<v<<" ";
	tin[v]=t++;
	used[v]=1;                            
	for(int i=0; i<a[v].size(); i++){
		int pot = a[v][i];
		if(used[pot]==0)
		{
			dfs(pot);
		}	
	}
	tout[v]=t++;
//cout<<v<<' ';
}
int main()
{
//freopen ("ancestor.in","r",stdin);
//freopen ("ancestor.out","w",stdout);
cin>>n;
for(int i=1; i<=n; i++)
{
 	cin>>x;
 	if(x==0)
 	{
 	 	root=i;
 	}
 	else 
 	{
 		a[x].push_back(i);
 	}
}
dfs(root);
cin>>m;
for(int i=1; i<=m; i++)
{ 
  cin>>z>>y;
  if(tin[z]<tin[y] && tout[z]>tout[y])
    cout<<'1'<<endl;
  else 
    cout<<'0'<<endl;
}
return 0;     
}
