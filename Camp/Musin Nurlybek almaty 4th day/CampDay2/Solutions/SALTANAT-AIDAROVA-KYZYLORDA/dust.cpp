#include <iostream>
#include <fstream>
#include <algorithm>

#define f first
#define s second

using namespace std;

pair<int,int>a[11111];
long long  n,w,u,v,cr,ans,mx=-1111;
int main ()
{
        freopen("dust.in","r",stdin);
    freopen("dust.out","w",stdout);

    cin>>n>>w;
    for(int i=1; i<=n; i++)
    {
        cin>>u>>v;
        a[i]=make_pair(u,v);
    }
    for(int i=1; i<=n; i++)
    {
        ans=a[i].f;
        cr=a[i].s;
       for(int j=1; j<=n; j++)
{
            if(  j!=i && cr+a[j].s<=w)
            {
                cr+=a[j].s;
                ans+=a[j].f;
            }
}
if(mx<ans)
mx=ans;
    }cout<<mx;
    return 0;
}
