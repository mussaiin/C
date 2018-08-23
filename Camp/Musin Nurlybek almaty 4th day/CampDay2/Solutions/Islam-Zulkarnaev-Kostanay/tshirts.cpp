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
long long int n,i,j,a[100000],x;

int main()
{
freopen("tshirts.in","r",stdin);
freopen("tshirts.out","w",stdout);
cin>>n;
x=n;
for(i=1;i<=n;i++)
{
cin>>a[i];
}
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n+1;j++)
{
if(a[i]==a[j]){x++;x=x+((j-1)-i);}
}
}
cout<<x;
return 0;
}

