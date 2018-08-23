#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;
const int MAXN = 1050;
int n, m;
int a[MAXN], b[MAXN];
int dp[MAXN][MAXN];
int main() {
    freopen("lcs.in", "r", stdin);
    freopen("lcs.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int j = 1; j <= m; j++) {
        cin >> b[j];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] == b[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[n][m];
    return 0;
}
