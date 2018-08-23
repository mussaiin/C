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
ll i, n, m, a[55];
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>m>>n;
for (int i=0; i<m; i++)
{
   a[i]=1;
}
for (int i=m; i<=n; i++)
{
   a[i]=a[i-m]+a[i-1];
}
cout<<a[n];
return 0; 
}  
