#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
ifstream cin("lcs.in");
ofstream cout("lcs.out");
long int n,m,a[10001],b[10001],maxx;
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[x]=i;
    }
    cin>>m;
    for (int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        b[x]=i;
    }
    int c=0,mid=1;
    for (int i=1;i<=n;i++)
    {
        for (int j=mid;j<=m;j++)
        {
            if (a[i]!=0 && a[i]==b[j])
            { 
               c++;
               mid=j+1;
            }
        }
     }
    cout<<c;
    return 0;
}
