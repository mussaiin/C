#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long x, y, x2, y2, a, b, c, ans;
int main()
{         
freopen("line2.in","r",stdin);
freopen("line2.out","w",stdout);
 cin>>x>>y>>x2>>y2;
 cout<<x2<<" "<<y2<<" "<<-(x2*x+y2*y);
return 0;            
}                    