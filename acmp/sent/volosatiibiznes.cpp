#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
 long long n, c[1000], i, j, ans=1, res=0, maxi=1, lday=0;
int main()
{         
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout);
  cin>>n;
  for(i=1; i<=n; i++)
  {
   	cin>>c[i];
  }
  for(i=1; i<=n; i++)
  {
  	maxi=0; ans=1;
  		for(j=i; j<=n; j++)
  		{
  		 	if(c[j]>maxi)
  		 	{
  		 	 	maxi=c[j];
  		 	 	ans=j;
  		 	}
  		}
          res+=(ans - lday)*c[ans];
    		i=ans;
    		lday=ans;
  }
  cout<<res;
return 0;     
}
     