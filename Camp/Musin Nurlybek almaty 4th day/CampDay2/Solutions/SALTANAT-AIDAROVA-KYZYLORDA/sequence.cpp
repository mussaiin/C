#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;
long long  mx=-1111,a[1111],n,cr=0;
int main ()
{
    freopen("sequence.in","r",stdin);
    freopen("sequence.out","w",stdout);
cin>>n;
for(int i=1; i<=n; i++)
cin>>a[i];
for(int i=1; i<=n; i++){
    cr=0;
for(int j=1; j<=n; j++)
{
    if((a[i]!=0) && a[j]%a[i]==0)
    cr++;
}
if(mx<cr)
mx=cr;
}
cout<<mx;
return 0;
}
