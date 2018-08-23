#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//    freopen("tshirts.in","r",stdin);
  //  freopen("tshirts.out","w",stdout);
    int n,a[2001],ans=0,ch=0,ar=0;
    cin>>n;
    ans=n;
    for(int i=1;i<=n;i++)cin>>a[i];
    while(ch<n)
    {
                 if(a[1+ar]==a[n-ar])ans+=n-(ar+1);
                 ar++;
                 ch++;
    }
    cout<<ans;
    return 0;
}
