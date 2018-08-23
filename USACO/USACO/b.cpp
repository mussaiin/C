#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <cstdio>
#include <new>
#include <ctime>
using namespace std;
long long x,y,z,n,ll,rr,temp,ans=0,maxi=-1;
struct az
{
	long long l,r;
}a[30000];
int main()
{
	freopen("milktemp.in","r",stdin);
	freopen("milktemp.out","w",stdout);
        cin>>n>>x>>y>>z;
        for (int i=1;i<=n;i++)
        {
        	cin>>a[i].l>>a[i].r;
        	if (a[i].r>rr)
        	{
        		rr=a[i].r;
        	}
        }
        for (int i=1;i<=rr;i++)
        {
        	ans=0;
        	for (int j=1;j<=n;j++)
        	{
        		if (a[j].l<=i && a[j].r>=i)
        		{
        			ans+=y;
        		}
        		if (a[j].l>i)
        		{
        			ans+=x;
        		}
        		if (a[j].r<i)
        		{
        			ans+=z;
        		}
        		

        	}
        	if (ans>maxi)
       		{
       			maxi=ans;
       		}
        }
        cout<<maxi;
	return 0;
}                                                                                     
