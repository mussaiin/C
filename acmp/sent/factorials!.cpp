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
ll fib[100500];
int n, k=0, ans=1;
string s;
int fib1(long long a)
{
	fib[0]=0;
     fib[2]=1;
     if (a<=2)
     {
     	return 1;
     }
     if (fib[a])
     {
          return fib[a];
     }
     fib[a]=fib1(a-1)+fib1(a-2);
     return fib[a];
}
int main()
{
freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);
cin>>n>>s;
k=s.size();
for (int i=n%k;i<=n;i+=k)
{
	if (i>0)
     {
     	ans*=i;
     }
}
cout<<ans;
return 0;
}