#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n,a[2001],ans=0,c=0,r=0;
    cin>>n;
    ans=n;
    for(int i=1;i<=n;i++)cin>>a[i];
    while(c<n)
    {
                 if(a[1+r]==a[n-r])ans+=n-(r+1);
                 r++;
                 c++;
    }
    cout<<ans;
    return 0;
}
