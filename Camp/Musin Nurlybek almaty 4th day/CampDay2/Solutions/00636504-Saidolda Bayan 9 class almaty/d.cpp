#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[3004],b[3004];
bool c[3004];
int main ()
{
freopen("lcs.in","r",stdin);
freopen("lcs.out","w",stdout);
 long long k,n,m,ans=0,i,j,l=0,r=0;
cin>>n;
 for (i=1;i<=n;i++)cin>>a[i];
cin>>m;
 for (i=1;i<=m;i++)cin>>b[i];
for (i=1;i<=n;i++){
c[i]=true;
for (j=1;j<=m;j++){
 if (a[i]==b[j])c[i]=false;
}
}

for (k=1;k<=n;k++){
if (c[k])continue;
 for (i=k;i<=n;i++){
int x=i;
 for (j=1;j<=m;j++){
  if (a[x]==b[j]){
  l++;
  c[x]=true;
if (x==n){break;}
 x++;
}
}
 if (l>ans)ans=l;
l=0;
}
}

cout<<ans;
}
