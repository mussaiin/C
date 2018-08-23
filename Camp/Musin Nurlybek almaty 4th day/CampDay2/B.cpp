#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <functional>

using namespace std;

int n, W;
bool used[1001];
pair <double, double> t[1001];
double res;

int main ()
{
 freopen ("dust.in", "r", stdin);
 freopen ("dust.out", "w", stdout);
 cin >> n >> W;
 for (int i = 0; i < n; i++)
 {
  int a, b;
  cin >> a >> b;
  t[i] = make_pair (a / b, b);
 }
 sort (t, t + n, greater <pair <double, double> >());
 int w = 0;
 for (int i = 0; i < n; i++)
 {
  if (t[i].second + w > W)
  {
   res += (W - w) * t[i].first;
   break;
  } else
  {
   res += t[i].first * t[i].second;
   w += t[i].second;
  }
 }
 printf ("%.3f", res);
 return 0;
}
