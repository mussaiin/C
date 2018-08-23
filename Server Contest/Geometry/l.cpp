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
 freopen("line1.in","r",stdin);
 freopen("line1.out","w",stdout);
 cin>>x>>y>>x2>>y2;
	a=y2-y;
	b=x-x2;
	c=-1*(a*x+b*y);
 cout<<a<<" "<<b<<" "<<c;
return 0;     
}                    