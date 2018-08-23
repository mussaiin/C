#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#define INF 99999999
using namespace std;
long long n, a[2010][2010], p, i, j;
bool used[2010];
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>n;
for(i=1; i<=n; i++){
 for(j=1; j<=n; j++){
  cin>>a[i][j];
 if(a[i][j]==5000)
 	a[i][j]=INF;
 }
}
 for(p=1; p<=n; p++)
 {
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=n; j++)
    {
    if(a[i][p]<INF && a[p][j]<INF)
    a[i][j]=min(a[i][j], a[i][p]+a[p][j]);
    }
  }
 }
  for(i=1; i<=n; i++){
	for(j=1; j<=n; j++){
	 cout<<a[i][j]<<" ";
	}
	cout<<endl;
  }	
  
return 0;
}
        
