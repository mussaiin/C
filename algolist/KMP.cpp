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
string a,b,s;
int p[MAXN],i,j,ans;
int main()
{
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	cin>>a>>b;
	s=a+"#"+b;
	p[0]=0;
	for(i=1;i<s.size();i++)
	{
		j=p[i-1];
		while(j>0&&s[j]!=s[i])j=p[j-1];
		if(s[i]==s[j])j++;
		p[i]=j;
	}
	for(i=0;i<s.size();i++)if(p[i]==a.size())ans++;
	cout<<ans;
	return 0;
}	