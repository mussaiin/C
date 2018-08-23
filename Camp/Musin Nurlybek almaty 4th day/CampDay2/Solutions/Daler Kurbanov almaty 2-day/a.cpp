// Solution by AKTL
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <deque>
#include <fstream>
#include <queue>
#include <stack>
#include <vector>
#include <iomanip>
#include <cstdio>
#include <new>
#define MATH_DEFINES
#define INF 99999999
#define pb push_back
#define pf push_front
#define pof pop_front
#define pob pop_back
#define f front
#define b back
using namespace std;
long long a[2000],n,b[2000]={1},maxi=-1*INF,maxi1=-1*INF;
int main()
{
	freopen ("sequence.in","r",stdin);
	freopen ("sequence.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=1;i<=2000;i++)
	b[i]=1;
	for (int i=1;i<=n;i++)
	{
		maxi=-1*INF;
		for (int j=i-1;j>=1;j--)
		{
			if (a[j]!=0 &&a[i]%a[j]==0&& b[j]>maxi)
			{
				maxi=b[j];
				maxi++;
				b[i]=maxi;
				maxi1=max(maxi,maxi1);
			}
		}
	/*	if (b[i-1]>b[i])
		{
			b[i]=b[i-1];
		}    /**/

	}
/*	for (int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}/**/
	cout<<maxi1;
	return 0;	
}