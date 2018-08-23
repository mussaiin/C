#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long a[50000],n,b[50000], ans=0, d[50000];
int main()
{         
 freopen("turtle.in", "r", stdin); 
 freopen("turtle.out", "w", stdout);
cin>>n;
for(int i=1; i<=n; i++)
{
	cin>>a[i]>>b[i];
if(a[i]+b[i]+1==n)
{
 	d[a[i]+1]=1;
}
}
for(int i=1; i<=n; i++)
{
 if(d[i]==1)
 {
  	ans++;
 }
}
cout<<ans;
return 0;     
}
     