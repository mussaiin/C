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
ll x, y, z, w, ans1, ans=0;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
int i, j;
cin>>x>>y>>z>>w;
for(i=0; i<=w; i++)
{
 	for(j=0; j<=w; j++)
 	{
 		ans1=w-((x*i)+(y*j));
 		if(ans1<0){ continue; }
         	if(ans1%z==0 || z==0)
 		{
 		     ans++;
 		}	
 	}
}
cout<<ans;
return 0; 
}  
