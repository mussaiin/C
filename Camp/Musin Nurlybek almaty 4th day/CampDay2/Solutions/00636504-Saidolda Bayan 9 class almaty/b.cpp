#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int b[3004];
double a[3004];
int main ()
{
freopen("dust.in","r",stdin);
freopen("dust.out","w",stdout);
long long i,j,n,w;
double ans=0;
cin>>n>>w;
for (i=1;i<=n;i++){
 cin>>a[i]>>b[i];
a[i]/=b[i];
}
 for (i=1;i<=n;i++){
 for (j=1;j<=n;j++){
 if (a[i]>a[j]){
 swap(a[i],a[j]);
 swap(b[i],b[j]);
}
}
}
i=1;
 while(w>0){
if (b[i]>w)b[i]=w;
ans+=a[i]*b[i];
w-=b[i];
i++;
}
 printf("%.3f",ans);
}
