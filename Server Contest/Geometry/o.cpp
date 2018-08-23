#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long x, y, x2, y2, f, a, b, c, ans;
int main()
{         
 freopen("point1.in","r",stdin);
 freopen("point1.out","w",stdout);
 cin>>x>>y>>a>>b>>c;
  if(a*x+b*y+c==0)
  {
  	 cout<<"YES";
  }
  else
  {
   	cout<<"NO";
  }
return 0;     
}                    