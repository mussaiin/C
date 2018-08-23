#define _USE_MATH_DEFINES
#include <iostream>
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

const long long int INF=1000*1000*1000;
const int MAXN=1000*1000;

using namespace std;
int n,i,m,sz=1,v;
string s;
struct node
{
	bool end;
	int next[30];
} t[MAXN];
void add(string a)
{
	v=1;
	for(int i=0;i<a.size();i++)
	{
		if(t[v].next[a[i]-'a'+1]==0)
		{
			t[v].next[a[i]-'a'+1]=++sz;
		}
		v=t[v].next[a[i]-'a'+1];
	}
	t[v].end=1;
}
bool check(string a)
{
	v=1;
	for(int i=0;i<a.size();i++)
	{
		if(t[v].next[a[i]-'a'+1]==0)
		{
			return 0;
		}
		v=t[v].next[a[i]-'a'+1];
	}
	if(t[v].end==1)return 1;
	else return 0;
}
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		add(s);
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>s;
		if(check(s))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}	