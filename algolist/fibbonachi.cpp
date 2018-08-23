#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 long long n,a[100],i;
 
 a[0]=1; a[1]=1;
 
 cin>>n;
 for(i=2; i<=n; i++)
 {
 	a[i]=a[i-1]+a[i-2];
 }
 cout<<a[n];
return 0;
}
