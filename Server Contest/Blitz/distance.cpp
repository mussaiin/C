#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>
#include<cstdio>
#define INF 99999999
using namespace std;                   
long long n, m, b[100050], s, f, v, to, w, i, j, x, y,p[100050],cost, now;
bool used[100050];
vector<int> ans;
vector< pair <int, int> > a[100050];
set< pair <int, int> > ss;                                 
int main()
{
freopen ("distance.in","r",stdin);
freopen ("distance.out","w",stdout); 
cin>>n>>m>>s>>f;
 for(i=1; i<=m; i++){
  cin>>x>>y>>w;
  a[x].push_back(make_pair(y,w));
  a[y].push_back(make_pair(x,w));
 }
for(i=1; i<=n; i++)
{
	b[i]=INF;
}
p[s]=s;
b[s]=0;
used[s]=1;
ss.insert(make_pair(b[s],s));
while(ss.size())
{
 cost=ss.begin()->first;
 v=ss.begin()->second;
 ss.erase(ss.begin());
 for(j=0; j<a[v].size(); j++){
 	 to=a[v][j].first;
	 cost=a[v][j].second;
	 if(v==to)
	 continue;
 if(!used[to])
 {
  if(b[to]>=b[v]+cost && b[v]+cost>=0)
  {
  	b[to]=b[v]+cost;
  	p[to]=v;
  	ss.insert(make_pair(b[to],to));
  }
}
}
}
used[v]=1;
if(b[to]==INF)
cout<<"-1";
else
cout<<b[f]<<"\n";

return 0;
}
        
