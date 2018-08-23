#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
int main()
{         
freopen("line3.in", "r", stdin);
freopen("line3.out", "w", stdout);
 double r, a, b, c, A, B, C;
 cin>>a>>b>>c>>r;
 printf("%f %f %.10f \n%f %f %.10f", a, b, c-r*sqrt(a*a+b*b), a, b, c+r*sqrt(a*a+b*b));
return 0;            
}                                                                   