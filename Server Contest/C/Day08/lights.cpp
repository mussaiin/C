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
map<int,int> ans;
int n, m, a[100500], b[100500];
int main()
{
freopen("lights.in", "r", stdin);
freopen("lights.out", "w", stdout);
cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        ans[i]=0;
    }
    for (int i=1; i<=m; i++)
    {                 
        cin>>a[i]>>b[i];
        ans[a[i]]++;
        ans[b[i]]++;
    }
    for (int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
return 0;
}