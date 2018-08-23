#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[3004],b[3004]={1};
int main ()
{
//freopen("tshirts.in","r",stdin);
//freopen("tshirts.out","w",stdout);
 long long ans=0,i,j,n;
 cin>>n;
for (i=1;i<=n;i++){
 cin>>a[i];
}
for (i=1;i<=n;i++){
b[i]=1;
}
 for (i=1;i<=n;i++){
 for (j=i+1;j<=n;j++){
 if (a[i]==a[j]){for (int k=i+1;k<=j;k++)b[k]++;}
}
}
  for (i=1;i<=n;i++){
  ans+=b[i];
ans%=1000000000;
}
cout<<ans;
}