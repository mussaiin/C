#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
long long a, b, c, d, n, m, x[4], y[4], ans, res, i ,j;
int main ()
{
  freopen ("input.txt", "r", stdin);
  freopen ("output.txt", "w", stdout);
  	cin>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
     if(x[1]==x[2]){ cout<<x[3]<<" "; }
     if(x[1]==x[3]){ cout<<x[2]<<" "; }
     if(x[2]==x[3]){ cout<<x[1]<<" "; }
     if(y[1]==y[2]){ cout<<y[3]<<" "; }
     if(y[1]==y[3]){ cout<<y[2]<<" "; }
     if(y[2]==y[3]){ cout<<y[1]<<" "; }
  return 0;
}       