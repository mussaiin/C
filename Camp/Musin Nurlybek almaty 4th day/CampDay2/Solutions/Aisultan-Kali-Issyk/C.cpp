#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

long long d[150][10], n;

int main ()
{
 freopen ("numbers.in", "r", stdin);
 freopen ("numbers.out", "w", stdout);
 cin >> n;
 for (int i = 1; i <= 9; i++)
  d[1][i] = 1;
 for (int i = 2; i <= n; i++)
  for (int j = 0; j <= 9; j++)
   for (int k = 0; k <= 9; k++)
    if (abs(j - k) <= 1)
     d[i][j] += d[i - 1][k];

 long long ans = 0;
 for (int i = 0; i <= 9; i++)
  ans += d[n][i];
 cout << ans;
 return 0;
}
