#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int k, p, i, j, l, ans=0, n;
int b[100500], a[100500];
int main ()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n;  
for (int i=1; i<=n; i++)
{
    cin>>a[i];
}
b[1]=0;
b[2]=abs(a[2]-a[1]);     
for (int i=3; i<=n; i++)
{
    b[i]=min(b[i-1]+abs(a[i]-a[i-1]), b[i-2]+3*abs(a[i]-a[i-2]));
}
cout<<b[n];
return 0;
}
