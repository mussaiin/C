#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <deque>
#define ll long long
#define pb push_back
#define mp make_pair
#define sz size()
#define ll long long 
#define ull unsigned long long  
const int  MAXN=1000*1000;
const double eps=1e-6;
const long long INF = 1000000000000000000ll;
using namespace std;
int binpow(int a,int n)
{
	int res=1;
	while(n)
	{
		if(n & 1)res *= a;		
		a *= a;
		n >>= 1;
	}	
	return res;
}
int a,b;
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin>>a>>b;
	cout<<binpow(a,b);
	return 0;
}
