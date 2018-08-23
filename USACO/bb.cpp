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
map <long long,long long> ot;
long long x,y,z,n,ll=99999999,rr=-1,l,ans,r,mid,used[30000],maxi=0;
struct az
{
	long long l,r;
}a[30000];
long long ok(int tempr)
{
	ans=0;
	for (int i=1;i<=n;i++)
	{
		if (a[i].l<=tempr && a[i].r>=tempr)
		{
			ans+=y;	
		}
		if (a[i].l>tempr)
		{
			ans+=x;	
		}
		if (a[i].r<tempr)
		{
			ans+=z;	
		}
	}
	return ans;
}
long long otv (int l,int r)
{
		mid=(r+l)/2;
		ans=ok(mid);
		if (used[mid])
		{
			return ot[mid];
		}
		used[mid]=1; 
		ot[mid]=ok(mid);
		if (ok(mid)>maxi)
		maxi=ok(mid);
		otv(l,mid);
		otv(mid+1,r);
}
int main()
{
	freopen("milktemp.in","r",stdin);
	freopen("milktemp1.out","w",stdout);
        cin>>n>>x>>y>>z;
        for (int i=1;i<=n;i++)
        {
        	cin>>a[i].l>>a[i].r;
        	if (a[i].l<ll)
        	{
        		ll=a[i].l;
        	}
        	if (a[i].r>rr)
        	{
	        	rr=a[i].r;
        	}
        }
        l=ll;
        r=rr;
        if (rr<10000 && n<1000)
        {
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
        else /* */
        otv(l,r);
        cout<<maxi;
/*        while (r-l>1)
        {
        	mid=(r+l)/2;
		ans=ok(mid);
		if (ans>maxi)
		{
			maxi=ans;
		}
        }/* */
	return 0;
}                                                                                     
