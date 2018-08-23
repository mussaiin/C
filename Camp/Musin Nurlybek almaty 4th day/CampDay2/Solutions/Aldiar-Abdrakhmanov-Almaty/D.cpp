#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    freopen("lcs.in","r",stdin);
    freopen("lcs.out","w",stdout);
    int n,m,a[1001],b[1001],ans=1,k=1,yolo,jk=1,max=-1000;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    for(int j=1;j<=m;j++)cin>>b[j];
    while(k!=n)
    {
               for(int s=1;s<=m;s++)
               {
                if(a[k]==b[s]&&k<=s)ans++;
                else if(a[k-(n/2)]==b[s-(n/2)]&&a[k]!=b[s])ans=0;
                else if(ans>max)max=ans;
               }
               k++;
    }
    cout<<ans;
//    system("pause");
    return 0;
}
