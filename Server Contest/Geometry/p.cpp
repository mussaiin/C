#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
struct point{
double x; double y;
};
int main()
{         
 freopen("point2.in","r",stdin);
 freopen("point2.out","w",stdout);
 double xx, yy, x, y, x2, y2, c, cosa, lena, lenb,eps=1e-12;
 point a,b;
 cin>>xx>>yy>>x>>y>>x2>>y2;
  if(xx==x && yy==y)
  {
   cout<<"YES";
   return 0;
  }
  a.x=x2-x;
  a.y=y2-y;
  b.x=xx-x;
  b.y=yy-y;
  c=a.x*b.x+a.y*b.y;
  lena=sqrt(a.x*a.x+a.y*a.y);
  lenb=sqrt(b.x*b.x+b.y*b.y);
  cosa=c/(lena*lenb);
  if(abs(cosa - 1) < eps)
  {
   cout<<"YES";
  }
  else
  {
   cout<<"NO";
  }
  return 0;     
}                    