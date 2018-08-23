#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;
const int MAXN = 1050;
int n, ans;
int a[50][50];
int main() {
    freopen("numbers.in", "r", stdin);
    freopen("numbers.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= 9; i++) {
        a[1][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        a[i][0] = a[i - 1][0] + a[i - 1][1];
        a[i][9] = a[i - 1][9] + a[i - 1][8];
        for (int j = 1; j <= 8; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1];
        }
    }

    for (int i = 0; i <= 9; i++) {
        ans += a[n][i];
    }
    cout << ans;
    return 0;
}
