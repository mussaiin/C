#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int a[100000000], n;
int main()
{
//freopen (".in","r",stdin);
//freopen (".out","w",stdout);
 cin>>n;
 for(int i=1; i<=n; i++)
 {
 	a[i]+a[i+1];
 }
 cout<<a[n];
return 0; 
}  
