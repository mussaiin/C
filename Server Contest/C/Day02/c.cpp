#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int a[2000050],b[200050],n,i,j;
int main()
{
freopen ("countsort.in","r",stdin);
freopen ("countsort.out","w",stdout);
 cin>>n;
 for(i=1; i<=n; i++)
 {
	cin>>a[i];
 	b[a[i]]++;
 }
 for(i=1; i<=20000; i++)
 {	
 	for(j=1; j<=b[i]; j++)
 	{
 		cout<<i<<" ";
 	}
 }	
return 0; 
}  
