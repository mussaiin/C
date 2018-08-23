#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
 long long s[1000000], n;
int main()
{         
 freopen("sum.in", "r", stdin); 
 freopen("sum.out", "w", stdout);
  string a, b, t;
  cin>>a>>b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for(int i=0; i<max(a.length(), b.length()); i++)
	{
		n=i;
		if(i<a.length())
		{
		  s[i]+=a[i]-48;
		}

		if(i<b.length())
		{
		  s[i]+=b[i]-48;
		}

		if(s[i]>9){
		 	s[i+1]++;
		 	n=i+1;
		 	s[i]%=10;
		}
	}
	reverse(s, s+n+1);
	for(int i=0; i<=n; i++)
	{
	 cout<<s[i];
	}
return 0;     
}
     