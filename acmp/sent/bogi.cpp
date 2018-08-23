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
ll n,m,kol,a[50];
string s[40],s1[50];
int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    cin>>m;
    for (int i=1;i<=m;i++)
    {
        cin>>s1[i];
    }
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
             
            if (s[i].size()==s1[j].size())
            {
                kol=0;
                for (int k=0;k<s[i].size();k++)
                {
                    if (s[i][k]==s1[j][k])
                    {
                        kol++;
                    }
                }
                if (kol==s[i].size()-1)
                {
                    a[i]++; 
                }
            }
        }
    }
    for (int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}