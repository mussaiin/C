#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#include<map>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int i, j, n, from, a[10000];
void rec(int n, int x)
{
    if(n==0)
    {
        if(x==1)
        { 
            return;
     }   
     cout<<a[0];
        for(int j=1; j<x; j++)
        {
            cout<<"+"<<a[j];
       }
        cout<<endl;
        return;
    }
    if(x==0)                                                 
    {
        for(int i=1; i<=n; i++)
        {
                a[x]=i;
                rec(n-i, x+1);
        }
    }
    else
    {
         for(int i=a[x-1]; i<=n; i++)
        {
                a[x]=i;
                rec(n-i, x+1);  
          }
    }
}
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>n;
rec(n, 0);
return 0; 
}  