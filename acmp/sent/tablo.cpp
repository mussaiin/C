#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
long long n, m, b[150][150], x, z, y, root, i, j, v, to;
char a[150][150];
int main()
{
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 cin>>n>>m;
 for(i=1; i<=n; i++)
 {
	for(j=1; j<=m; j++)
	{
		cin>>a[i][j];
 	}
 }
 for(i=1; i<=n; i++)
 {
	for(j=1; j<=m; j++)
	{    	
		cin>>b[i][j];
	}	
 }
  for(i=1; i<=n; i++)
  {
	for(j=1; j<=m; j++)
	{
		if(a[i][j]=='R' && b[i][j]!=4 && b[i][j]!=5 && b[i][j]!=6 && b[i][j]!=7)    
		{
			cout<<"NO";
		return 0;
		}
		
		if(a[i][j]=='G' && b[i][j]!=2 && b[i][j]!=3 && b[i][j]!=6 && b[i][j]!=7)
		{
		 	cout<<"NO";
		return 0;
	     }
	     
	     if(a[i][j]=='B' && b[i][j]!=1 && b[i][j]!=3 && b[i][j]!=5 && b[i][j]!=7)    
	     {
			cout<<"NO";
		return 0;
		}
	}	
 }
cout<<"YES";
return 0;     
}
