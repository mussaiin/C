#include <iostream>
#include <fstream>
using namespace std;
int main(){
 freopen("fib.in", "r", stdin); 
 freopen("fib.out", "w", stdout);
 long long a[1000],n,i;
 a[0]=1; a[1]=1;
 cin>>n;
 cin>>a[n]>>a[n+1];
     for(i=n-1; i>=1; i--)
	{
		a[i]=a[i+2]-a[i+1];
	}
 cout<<a[1]<<' '<<a[2];
return 0;
}
