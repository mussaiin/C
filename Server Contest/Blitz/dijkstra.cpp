#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#define INF 99999999
using namespace std;
long long n, a[2010][2010], b[2010], s, f, v, to, i, j;
bool used[2010];
int main()
{
//freopen ("dijkstra.in","r",stdin);
//freopen ("dijkstra.out","w",stdout); 
cin>>n>>s>>f;

 for(i=1; i<=n; i++)
 {
  	 for(j=1; j<=n; j++)
  	 {
   		 cin>>a[i][j];
 	 }
 }
 for(i=1; i<=n; i++)
 {
    	 b[i]=INF;
 }
 b[s]=0;
 used[s]=1;
 v=s;
 do
 {
 	for(to=1; to<=n; to++)
 	{
		 if(v==to)
			continue;
		 if(a[v][to]>=0)
		 {
	 	 	if(b[to]>=b[v]+a[v][to] && b[v]+a[v][to]>=0)
		 	b[to]=b[v]+a[v][to];
		 }
	}
 used[v]=1;
 v=-1;
	for(i=1; i<=n; i++){
		if(b[i]!=INF && !used[i] && (v==-1 || b[v]>b[i])){ v=i; }
	}
}
 while(v!=-1);
 if(b[f]==INF)
 	cout<<"-1";
 else
 	cout<<b[f];
 return 0;
}
        
