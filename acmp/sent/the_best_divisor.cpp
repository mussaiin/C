#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long n, ans=0, maxi=0, m, mini=999999, maxi2, k=0;
int main()
{
 freopen ("input.txt", "r", stdin);
 freopen ("output.txt", "w", stdout);
 cin>>n;
 for (int i=1;i<=n;i++)
 {
	 if (n%i==0){
		 m=i;
		 while (m!=0)
		 {
			 ans=ans+(m%10);
			 m/=10;
			 k++;
		 }
		 if (ans>maxi || ans==maxi && k<mini)
		 {              
			 mini=k;
			 maxi=ans;
			 maxi2=i;
		 }
	 }
  k=ans=0;
 }
 cout<<maxi2;
return 0;
}