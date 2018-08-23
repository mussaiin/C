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
long long n,a[20],ans=0,maxi;
bool odin,dva,tri;
int main()
{
	freopen("combo.in","r",stdin);
	freopen("combo.out","w",stdout);
        cin>>n;
        cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
        maxi=max(a[1],max(a[2],max(a[3],max(a[4],max(a[5],a[6])))));
        maxi+=2;
        for (int i=1;i<=n;i++)
        {
        	for (int j=1;j<=n;j++)
        	{
        		for (int k=1;k<=n;k++)
        		{
	        				odin=dva=tri=0;
/*	       					if (min(abs(i-a[1]),abs(n-(i+a[1])))<=2||min(abs(i-a[4]),abs(n-(i+a[4])))<=2)
	        				{
	        					odin=1;
        					}
        					if (min(abs(j-a[2]),abs(n-(j+a[2])))<=2||min(abs(j-a[5]),abs(n-(j+a[5])))<=2)
	        				{
	        					dva=1;
        					}
        					if (min(abs(k-a[3]),abs(n-(k+a[3])))<=2||min(abs(k-a[6]),abs(n-(k+a[6])))<=2)
        					{
        						tri=1;
        					}
        					if (odin && dva && tri)
        					{
        						cout<<i<<" "<<j<<" "<<k<<"\n";
//        						system ("pause");
        						ans++;
        						goto k;
        					}
        					// 
//        					odin=dva=tri=0;
        					/* */
        					 
        					if (min(abs(i-a[1]),abs(n-i+a[1]))<=2)
	        				{
	        					odin=1;
        					}
        					if (min(abs(j-a[2]),abs(n-j+a[2]))<=2)
	        				{
	        					dva=1;
        					}
        					if (min(abs(k-a[3]),abs(n-k+a[3]))<=2)
        					{
        						tri=1;
        					}
        					if (odin && dva && tri)
        					{
//        						cout<<i<<" "<<j<<" "<<k<<"\n";
//        						system ("pause");
        						ans++;
        						goto k;
        					}
        					// 
        					odin=dva=tri=0;
						if (min(abs(i-a[4]),abs(n-i+a[4]))<=2)
	        				{
	        					odin=1;
        					}
        					if (min(abs(j-a[5]),abs(n-j+a[5]))<=2)
	        				{
	        					dva=1;
        					}
        					if (min(abs(k-a[6]),abs(n-k+a[6]))<=2)
        					{
        						tri=1;
        					}
        					if (odin && dva && tri)
        					{
//        						cout<<i<<" "<<j<<" "<<k<<"\n";
//        						system("pause");
        						ans++;
        						goto k;
        					}                       /* */
        					k:;
        					
        					
        		}
        	}
        }
        cout<<ans;
	return 0;
}                                                                                     
                                                    