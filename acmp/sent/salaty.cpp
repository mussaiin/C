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
const int  MAXN=1000*1000;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;
long long a[2000006], b[2000006];
int n;
double l=2;
using namespace std;
int binpow(int a,int x)
{
	int res=1;
	while(x)
	{
		if(x & 1)
		res *= a;		
		a *= a;
		x >>= 1;
	}	
	return res;
}
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
scanf("%d",&n);
if(n==1)
{
	cout<<0;
return 0;
}
cout<<binpow(l,n)-(n+1);
return 0; 
}