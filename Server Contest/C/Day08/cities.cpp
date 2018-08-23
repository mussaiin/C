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
int n, a[150][150];
int main()
{
freopen("cities.in", "r", stdin);
freopen("cities.out", "w", stdout); 
cin>>n;
for(int i=1; i<=n; i++)
{
 	for(int j=1; j<=n; j++)
 	{
 	 	cin>>a[i][j];
	}	
}
int k=0;
for(int i=1; i<=n; i++)
{
 	for(int j=1; j<=n; j++)
 	{
 		if(a[i][j]==1)
 		{
 		  k++;
 		}
	}	
}
cout<<k/2;
return 0; 
}  
