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
long long n, k, a[100500], b[100500], sum, maxi=0;
int main()
{
freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for (int i=1;i<=n;i++)
    {
        b[i]=1;
    }
    for (int i=2;i<=n;i++)
    {
        maxi = 1;
        for (int j=i-1;j>=1;j--)
        {
            if (a[i]>a[j] && b[j]+1>maxi)
               maxi=b[j]+1;
             
        }
     
        b[i] = maxi;
    }
    cout<<*max_element(b+1,b+n+1)<<endl;
    return 0;
}