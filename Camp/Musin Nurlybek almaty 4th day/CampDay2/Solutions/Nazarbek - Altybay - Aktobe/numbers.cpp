// Solved by Nazarbek Altybay

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

#define ll long long
#define fn "numbers"

using namespace std;

const int INF = 1e9;
const int MXN = 1e2;

int dp[MXN][MXN];
int ans, n;

int main()
{
    freopen(fn".in", "r", stdin);
    freopen(fn".out", "w", stdout);

    scanf("%d", &n);

    for (int i = 1; i < 10; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][1] + dp[i - 1][0];
        for (int j = 1; j <= 9; j++)
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1];
    }

    for (int i = 0; i <= 9; i++)
        ans += dp[n][i];

    printf("%d", ans);
    return 0;
}
