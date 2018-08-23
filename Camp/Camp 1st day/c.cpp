#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
long long a[200][200],k=0,n;
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
	 		if (a[i][j])
	 		k++;
	 	}
	}
	cout<<k/2;
	return 0;	
}