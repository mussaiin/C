// Solved by Nazarbek Altybay

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>

#define ll long long
#define fn "dust"
#define PAIR pair<long double, int>

using namespace std;

const int INF = 1e9;
const int MXN = 1e4;

PAIR d[MXN];

int n, w, x, y;
long double ans;

int main()
{
    freopen(fn".in", "r", stdin);
    freopen(fn".out", "w", stdout);

    scanf("%d%d", &n, &w);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        d[i] = make_pair((x * 1.0) / (y * 1.0), y);
    }
    sort(d, d + n);
    for (int i = n - 1; i >= 0 && w > 0; i--)
    {
        x = min(w, d[i].second);
        ans += d[i].first * x;
        w -= x;
    }
    printf("%.3f", ans);
    return 0;
}
