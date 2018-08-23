#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;
long long n;
int i, j;
double ans=0, m, ans1, sum=0;
int a[30050];
int main()
{         
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout);
 cin>>n;
 for(i=1; i<=n; i++)
 {
  	cin>>a[i];
 }
 ans=((a[1]+a[n])/2);
 for(i=2; i<n; i++)
 {
  	sum+=a[i];
 }
 m=n-1;
 ans1=(ans+sum)/m;   
 cout<<fixed<<setprecision(10)<<ans1;
return 0;     
}                    

