#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long a[150][150], n, b[150], d, f, k=0;
int  i, j;
int main ()
{
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
    cin>>n;
	for (i=1; i<=n; i++){
		for (j=1; j<=n; j++){
			cin>>a[i][j];        
		} 
	}
	for (i=1; i<=n; i++)
	{
		cin>>b[i];
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
				f=b[i];
				d=b[j];
			if(a[i][j]==1 && d!=f)    
				k++;    
		} 
	}
    cout<<k/2;
return 0;
}