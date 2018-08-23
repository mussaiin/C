#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int a,b,c,ans=0,d;
double x;
int main ()
 {
  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);
  cin>>a>>b>>c>>d;
  for (int i=-100;i<=100;i++)
  {
  x=i;
  if (fabs((a*(x*x*x))+(b*(x*x))+(c*x)+d)==0)
  {
  cout<<i<<" ";
  }
  }
  return 0;
 }       