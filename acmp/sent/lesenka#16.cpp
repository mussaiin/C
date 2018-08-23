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
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
int n;
cin>>n;
int a[101][101];
for(int i=1; i<=n; i++)
{
 	a[i][0]=0;
}
for(int j=0; j<=n; j++)
{
	a[0][j]=1;
}
for(int i=1; i<=n; i++)
{
	for(int k=1; k<=i; k++)
 	{
 		a[i][k]=a[i][k-1]+a[i-k][k-1];
 		for(int k=i+1; k<=n; k++)
 		{
 			a[i][k]=a[i][i];
 		}
 	}
}
cout<<a[n][n];
return 0;
}