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
long long n, ans1, ans2, maxi=0, p;
int i, j;
int main()
{
freopen ("uspon.in","r",stdin);
freopen ("uspon.out","w",stdout); 
  cin>>n>>ans1;
  ans2=ans1;
  for(i=1; i<n; i++) 
  {
    cin>>p;
  	if(p<=ans1) 
	{
	   maxi=max(maxi, ans1-ans2);
	   ans2=p;
	}
    ans1=p;
  }
  maxi=max(maxi, ans1-ans2);
 cout<<maxi;
return 0; 
}  
