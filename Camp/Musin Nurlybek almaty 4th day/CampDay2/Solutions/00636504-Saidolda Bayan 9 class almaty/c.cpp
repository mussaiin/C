#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[3004][3004];
int main ()
{
freopen("numbers.in","r",stdin);
freopen("numbers.out","w",stdout);
 long long n,j,k,ans=0,i;
cin>>n;
for (i=0;i<=9;i++){
 a[1][i]=1;
}
for (k=1;k<=n;k++){
for (i=0;i<=9;i++){
 for (j=0;j<=9;j++){
 if (abs(i-j)<=1){a[k][i]+=a[k-1][j];}
}
}
}
for (j=1;j<=9;j++){
 ans+=a[n][j];
}
 cout<<ans;
}
