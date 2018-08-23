#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    freopen("dust.in","r",stdin);
    freopen("dust.out","w",stdout);
    double n,m,v[1001],k[1001],min,ans=0,wow=1,tans=-100,dah=-100;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>v[i]>>k[i];
    while(wow!=n)
    {
                 for(int j=1;j<=n;j++)
                 {
                         if(k[j]<=min)
                              {
                                     min-=k[j];
                                     ans+=v[j];
                                     if(ans>tans)tans=ans;
                              }
                 }
                 if(min>0)
                 {
                  for(int l=0;l<n;l++)if(v[l]>dah)dah=v[l]*(k[l]/min);
                  ans+=dah;
                 }
                 min=m;
                 wow++;
    }
    cout<<tans<<".000";
    system("pause");
    return 0;
}
