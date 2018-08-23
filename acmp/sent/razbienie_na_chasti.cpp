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
int n, ans, a[30000], ost, m;
int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
cin>>n>>m;
ans=n/m;
ost=n%m;
for (int i=1; i<=m; i++)
{
    a[i]=ans;
}
if(ost==0)
{
	for (int i=1; i<=m; i++)
	{
   	     cout<<a[i]<<" ";
 		   if (i==m)
		   {
		        goto l;
 		   }
	}
}
if (ost!=0)
{
    for (int i=m; i>=1; i--)
    {   
        a[i]++;
        ost--;
        if (ost<=0)
        {
            break;
        }
    }
}
for (int i=1; i<=m; i++)
{
	cout<<a[i]<<" ";
}
l:;
return 0;
}
