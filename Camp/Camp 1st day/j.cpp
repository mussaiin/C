#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
long long a[200][200],n,b,c,m,bb[200];
int main()
{
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=m;i++)
	{
		cin>>b>>c;
		bb[b]++;
		bb[c]++;
	}
	for (int i=1;i<=n;i++)
	{
		cout<<bb[i]<<"\n";
	}
	return 0;	
}