#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;
const int MAXN = 1050;
int a[MAXN], dp[MAXN];
int n, ans;
int main() {
    freopen("sequence.in", "r", stdin);
    freopen("sequence.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] = abs(a[i]);
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (a[i] % a[j] == 0) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
    return 0;
}
