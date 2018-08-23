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
long long n, m, a[55][55], b[5555], ans;
int i,j;
bool used;
int main()
{
freopen ("bwsquare.in","r",stdin); 
freopen ("bwsquare.out","w",stdout); 
cin>>n>>m;
for(i=1; i<=n; i++)
{
	for(j=1; j<=m; j++)
	{	
     	cin>>a[i][j];
	}
}
ans=0;
for(i=1; i<=n; i++)                 
{
    used=1;
    for(j=1; j<=m; j++)
    {
    		if (a[i][j]==0)
	     {
	     	  used=0;
	            break;
	     }
	}
          if(used)
          {
              b[ans++]=i;
          }
}
for (i=1; i<=n; i++)
{
	used=1;
     for(j=1; j<=m; j++)
     {
     	if(a[i][j]==0)
     	{
                used=0;
                break;
          }
     }
     	if(used)
          {
          	b[ans++]=-i;
          }
}
cout<<ans<<endl;
for(i=0; i<ans; i++)
{
	cout<<b[i]<<" ";
}
return 0; 
}  
 
