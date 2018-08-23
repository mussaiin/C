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
 freopen ("distance1.in","r",stdin);
 freopen ("distance1.out","w",stdout);
	cin>>x>>y>>a>>b>>c;
	printf("%.17f", fabs(a*x+b*y+c)/(sqrt(a*a+b*b)));
return 0;     
}                    