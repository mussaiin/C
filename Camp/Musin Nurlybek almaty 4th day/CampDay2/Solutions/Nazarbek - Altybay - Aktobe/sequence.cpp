// Solved by Nazarbek Altybay

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

#define ll long long
#define fn "sequence"

using namespace std;

const int INF = 1e9;
const int MXN = 1e4;

int dp[MXN], a[MXN];
int ans, n;

int main()
{
    freopen(fn".in", "r", stdin);
    freopen(fn".out", "w", stdout);

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = i - 1; j >= 0; j--)
            if (a[i] % a[j] == 0)
                dp[i] = max(dp[i], dp[j] + 1);

        ans = max(ans, dp[i]);
    }

    printf("%d", ans);

    return 0;
}
