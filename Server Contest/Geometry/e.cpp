#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long xx, yy, x, y, x2, y2, a, b, c, ans;
int main()
{         
 freopen("distance2.in","r",stdin);
 freopen("distance2.out","w",stdout);
 cin>>xx>>yy>>x>>y>>x2>>y2;
	a=y2-y;
	b=x-x2;
	c=-1*(a*x+b*y);
 	printf("%.20f", fabs(a*xx+b*yy+c)/(sqrt(a*a+b*b)));
 return 0;     
}                    