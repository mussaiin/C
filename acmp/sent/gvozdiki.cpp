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
long long a[100500], n, f[100500];
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>n;
for (int i=1;i<=n;i++)
{
	cin>>a[i];
}
sort(a+1,a+n+1);
f[2]=a[2]-a[1];
f[1]=f[2];
for (int i=3;i<=n;i++)
{
	f[i]=min(f[i-1],f[i-2])+(a[i]-a[i-1]);
}
cout<<f[n];
return 0;
}
