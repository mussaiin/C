#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int n, a[2000001], i;
int main()
{
freopen ("countsort.in","r",stdin);
freopen ("countsort.out","w",stdout); 
 cin>>n;
 for( i=1; i<=n; i++)
 {
 	cin>>a[i];
 }
 sort(a+1, a+n+1);
 for( i=1; i<=n; i++)
 {
 	cout<<a[i]<<" ";
 }
return 0; 
}  
