#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[3004];
int main ()
{
freopen("sequence.in","r",stdin);
freopen("sequence.out","w",stdout);
long long n,l,ans=0,i,j;
cin>>n;
for (i=1;i<=n;i++)cin>>a[i];
for (i=1;i<n;i++){
if (a[i]==0)continue;
l=1;
int x=i;
for (j=x+1;j<=n;j++){
if (a[j]==0)continue;
 if (a[j]%a[x]==0){l++;x=j;} 
}
if (l>ans)ans=l;
}
cout<<ans;
}
