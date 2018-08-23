#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
long long a[200][200],n;
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
	 	}
	}
	for (int i=1;i<=n;i++)
	{
	 	for (int j=1;j<=n;j++)
	 	{
	 		if (a[i][j]==a[j][i] && i==j)
	 		{
	 			cout<<"YES";
		 		return 0;
	 		}		
	 		
	 	}
	}
	cout<<"NO";
	return 0;	
}