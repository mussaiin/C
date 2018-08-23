#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
long long a[200][200],n,b,c,m,bb[200];
int main()
{
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			bb[i]+=a[i][j];
		}
	}
	for (int i=1;i<=n;i++)
	{
		cout<<bb[i]<<"\n";
	}
	return 0;	
}