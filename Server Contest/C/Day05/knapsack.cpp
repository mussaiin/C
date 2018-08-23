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
ll a[1000], d[1000][10002];
int main()
{
freopen ("knapsack.in","r",stdin);
freopen ("knapsack.out","w",stdout); 
int n, s;
cin>>s>>n;
for(int i=1; i<=n; i++)
{
 	cin>>a[i];
}
sort(a+1, a+n+1);
for(int i=1; i<=n; i++)
{
 	for(int j=0; j<=s; j++)
 	{
 	 	d[i][j]=d[i-1][j];
 	 	if(j>=a[i])
 	 	{
 	 	 	d[i][j]=max(d[i][j], d[i-1][j-a[i]]+a[i]);
 	 	}
 	}
}
cout<<d[n][s];                           
return 0; 
}  
