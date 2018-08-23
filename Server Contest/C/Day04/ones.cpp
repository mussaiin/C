#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
ll n, a[100500];
int main()
{
freopen("ones.in","r",stdin);
freopen("ones.out","w",stdout);
cin>>n;
a[1]=2;
a[2]=4;
a[3]=7;
for(int i=4; i<=n; i++)
{
    a[i]=a[i-1]+a[i-2]+a[i-3];
}
cout<<a[n];
return  0;
}
 
