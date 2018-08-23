#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
long long int ans,k=0,k1=0;
long long sum=0;
long long n,a[1000000],b[1000000];
string s;
bool used[1000000];
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        if (a[i]>=0)
        {
            sum+=a[i];
            continue;
        }
        ans+=a[i];
    }
    sort(b+1,b+n+1);
    if (b[1]==0 && b[n]==0)
    {
        cout<<0;
        return 0;
    }
    if (ans*-1>sum)
    {
        for (int i=1;i<=n;i++)
        {
            if (a[i]<=0)
            k++;
        }
        cout<<k<<endl;
        for (int i=1;i<=n;i++)
        {
            if (a[i]<=0)
            {
                cout<<i<<" ";
            }
        }
    }
    if (ans*-1<sum)
    {
        for (int i=1;i<=n;i++)
        {
            if (a[i]>=0)
            k1++;
        }
        cout<<k1<<endl;
        for (int i=1;i<=n;i++)
        {
            if (a[i]>=0)
            {
                cout<<i<<" ";
            }
        }
    }
    if (ans==sum)
    {
        cout<<0;
    return 0;
    }
    return 0;    
}