// dp

#define _CRT_SECURE_NO_DEPRECATE

#include <algorithm>
#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

const int nmax = 2001;
const int inf = (int)1e+9;

int d[nmax][nmax];
int a[nmax];
int n;

long long solve(int l, int r) {
    if (d[l][r] != -1) return d[l][r];
    long long res = solve(l + 1, r) + solve(l, r - 1) - solve(l + 1, r - 1) + inf;
    if (a[l] == a[r]) res += solve(l + 1, r - 1) + 1;
    return d[l][r] = (int)(res % 1000000000);
}

int main() {
    freopen("tshirts.in", "rt", stdin);
    freopen("tshirts.out", "wt", stdout);

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i < j) d[i][j] = -1;
            if (i == j) d[i][j] = 1;
            if (i > j) d[i][j] = 0;
        }
    }
    printf("%d", solve(0, n - 1));

    return 0;
}
