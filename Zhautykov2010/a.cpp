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
ll n, m, d[55][7], ans=0, day=0;
int i, j;
bool used[55];
int main()
{
freopen ("document.in", "r", stdin);
freopen ("document.out", "w", stdout); 
 cin>>n;
 for(i=1; i<=n; i++)
 {
 	for(j=1; j<=5; j++)
 	{
 	 	cin>>d[i][j];
 	 	d[i][6]=0;
 	 	d[i][7]=0;
 	}
 }
 for(i=1; i<=n; i++)
 {
  	for(j=1; j<=5; j++)
  	{
 		while(!used[n])
		{
			if(d[i][j]==1)
			{
				ans++;
				day++;
			}
     	}
  	}
 }
 cout<<day+ans;
return 0; 
}  
