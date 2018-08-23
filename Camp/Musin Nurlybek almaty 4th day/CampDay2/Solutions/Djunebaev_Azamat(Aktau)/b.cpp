#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
double n, w, mi;
double a[1111], b[1111], dp[1111111];
int main ()
{
freopen ("dust.in", "r", stdin);
    freopen ("dust.out", "w", stdout);
    cin >> n >> w;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    for (int i = 1; i <= n; i++) mi = min(mi, b[i]);
    for (int i = 1; i <= n; i++)
     for (int j = w; j >= mi; j--)
     {
          if (int(j - b[i]) >= 0 && dp[int(j - b[i])] + a[i] > dp[j])
          {
                dp[j] = dp[int(j - b[i])] + a[i];
          }
     }
    //cout << dp[w] << endl;
    printf("%.3f", dp[int(w)]);
    return 0;
}
