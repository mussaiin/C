#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;
const int MAXN = 2005, MOD = 1000 * 1000 * 1000;
int n;
int a[MAXN];
int dp[MAXN][MAXN];
int sum[MAXN][MAXN];
int m[MAXN];
int main() {
    freopen("tshirts.in", "r", stdin);
    freopen("tshirts.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int j = 1; j <= n; j++) {
        for (int i = j; i >= 1; i--) {
            long long int tmp;
            if (a[i] == a[j]) {
                tmp = (dp[i][j] + 1 + sum[i + 1][j - 1]) % MOD;
                dp[i][j] = tmp;
            }
            tmp = (m[i] + dp[i][j]) % MOD;
            m[i] = tmp;
            tmp = (m[i] + sum[i + 1][j]) % MOD;
            sum[i][j] = tmp;
        }
    }

    cout << sum[1][n] % MOD;

    return 0;
}
