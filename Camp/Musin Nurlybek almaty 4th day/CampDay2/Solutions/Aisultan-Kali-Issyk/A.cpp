#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <functional>

using namespace std;

long long n, a[11111], d[11111];;

int main ()
{
 freopen ("sequence.in", "r", stdin);
 freopen ("sequence.out", "w", stdout);
 cin >> n;
 for (int i = 1; i <= n; i++)
 {
  cin >> a[i];
  d[i] = 1;
 }
 fill (d, d + 1000, 1);
 for (int i = n; i >= 1; i--)
 {
  for (int j = 1; j < i; j++)
  {
   int q = abs (a[i]), w = abs (a[j]);
   if (q % w == 0)
   {
    d[i]++;
    d[i] %= 1000000000;
   }
  }
 }
 //long long ans = 1 << 30;
 cout << *max_element (d + 1, d + n + 1);
/*
 for (int i = 1; i <= n; i++)
  cout << d[i] << " ";
*/
 return 0;
}
