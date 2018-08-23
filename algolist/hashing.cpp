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
#define f first
#define s second
#define mp make_pair
#define sz size()
#define INF 1000*1000*1000
#define _USE_MATH_DEFINES
#define fname ""
const int  MAXN=1000*1000;

using namespace std;
string s,m;
int i,j,prime;
unsigned long long hash[MAXN],power[MAXN];
int main()
{
	#ifndef ONLINE_JUDGE
	freopen(fname".in","r",stdin);
	freopen(fname".out","w",stdout);
	#endif
	cin>>s;
	cout<<s<<endl;
	hash[0]=s[0];
	prime=7;
	power[0]=1;
	for(i=1;i<s.sz;i++)
	{
		power[i]=power[i-1]*prime;
		hash[i]=hash[i-1]*prime+s[i];
	}
	for(i=0;i<s.sz;i++)
	{
		m="";
		for(j=i;j<s.sz;j++)
		{
			m+=s[j];
			cout<<m<<" Hash-->"<<hash[j]-hash[i-1]*power[j-i+1]<<endl;
		}
	}
	return 0;
}	