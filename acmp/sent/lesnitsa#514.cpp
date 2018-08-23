#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long a[100002], i, n;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   cin>>n;
    a[1]=1;
    a[2]=3;
    a[3]=6;
     if (n==1)
     {
         cout<<1;
     }
  for (i=2;i<=n;i++)
  {
    a[i]=a[i-1]+i; 
    if (n<a[i] )
    {
        cout<<i-1;
    return 0;   
    }
    if (n==a[i])
    {
        cout<<i;
    return 0;
    }
  }
return 0;
}