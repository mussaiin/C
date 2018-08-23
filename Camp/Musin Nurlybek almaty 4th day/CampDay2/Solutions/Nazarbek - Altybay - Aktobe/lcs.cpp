// Solved by Nazarbek Altybay

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

#define ll long long
#define fn "lcs"

using namespace std;

const int INF = 1e9;
const int MXN = 1111;

int n, m;
int a[MXN], b[MXN], dp[MXN][MXN];

int main()
{
    freopen(fn".in", "r", stdin);
    freopen(fn".out", "w", stdout);

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
        scanf("%d", &b[i]);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] == b[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    printf("%d", dp[n][m]);
    return 0;
}
