#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long x, y, x2, y2, f, a, b, c, ans, ans1;
int main()
{         
 freopen("position.in","r",stdin);
 freopen("position.out","w",stdout);
  cin>>x>>y>>x2>>y2>>a>>b>>c;
	ans=a*x+b*y+c;
	ans1=a*x2+b*y2+c;
  if ((ans<0 && ans1<0)||(ans>0 && ans1>0))
  {
  	 cout<<"YES";
  	 return 0;
  }
  else
  {
   	cout<<"NO";
  }
return 0;     
}                    