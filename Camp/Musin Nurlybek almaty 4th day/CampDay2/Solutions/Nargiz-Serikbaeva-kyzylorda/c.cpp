#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
    freopen ("sequence.in","r",stdin);
    freopen ("sequence.out","w",stdout);
    int a[110],c=0,m,max=-1111,d=0;
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        }
        cin>>m;
        for (int i=1;i<=m;i++)
        {
            cin>>a[i];
            }
            for (int i=1;i<=n;i++)
            {
                for (int j=1;j<=m;j++)
                {
                    if (a[i]==a[j])
                    d++;
                    if(max<d)
                    max=d;
                    }
                    cout<<max;}
                return 0;
                }
