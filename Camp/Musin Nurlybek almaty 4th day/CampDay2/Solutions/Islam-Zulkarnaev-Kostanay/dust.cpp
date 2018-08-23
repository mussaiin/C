#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<stdio.h>
#include<cstdlib>
#include<stack>
#include<deque>
#include<queue>
#include<utility>
#include<iomanip>
using namespace std;
long long int n,m,a[100000],w[100000],i,j,x=0;
double c[100000],z=0;
int main()
{
freopen("dust.in","r",stdin);
freopen("dust.out","w",stdout);
cin>>n>>m;
for(i=1;i<=n;i++)
{
cin>>a[i]>>w[i];
c[i]=a[i]/w[i];
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n+1;j++)
{
if(c[i]<c[j]){swap(c[i],c[j]);swap(w[i],w[j]);}
}
}
for(i=1;i<=n;i++)
{
if(x+w[i]<=m){x=x+w[i];z=z+w[i]*c[i];}
else if(x<m && x+w[i]>m){z=z+(c[i]*(m-x));x=x+(m-x);}
if(x==m){break;}
}
cout<<fixed<<setprecision(3)<<z;
return 0;
}

