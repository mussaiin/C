#include <iostream>
#include <fstream>
using namespace std;
long long int n, dp[22];
int main ()
{
    freopen ("numbers.in", "r", stdin);
    freopen ("numbers.out", "w", stdout);
    cin >> n;
    dp[2] = 26;
    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] * 10;
    if (n == 20) cout << dp[n - 1] << 0;
    else cout << dp[n];
    return 0;
}
