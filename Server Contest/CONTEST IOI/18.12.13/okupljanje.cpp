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
ll n, p, m;
int i, j;
int main()
{
freopen ("okupljanje.in","r",stdin);
freopen ("okupljanje.out","w",stdout); 
cin>>n>>p;
for(i=1; i<=5; i++)
{
 	cin>>m;
 	cout<<m-n*p<<" ";
} 
return 0; 
}  
