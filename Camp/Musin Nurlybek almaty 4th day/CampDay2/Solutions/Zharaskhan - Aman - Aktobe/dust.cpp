#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
const int MAXN = 1050;
int n, W;
int v[MAXN], w[MAXN];
long double ans;
vector <pair <long double, int> > a;
int main() {
    freopen("dust.in", "r", stdin);
    freopen("dust.out", "w", stdout);
    cin >> n >> W;
    for (int i = 1; i <= n; i++) {
        cin >> v[i] >> w[i];
        a.push_back(make_pair(v[i] / w[i], i));
    }
    sort(a.begin(), a.end());
    for (int i = a.size() - 1; i >= 0; i--) {
        int j = a[i].second;
        int temp = min(w[j], W);
        ans += temp * a[i].first;
        W -= temp;
        if (W == 0) {
            break;
        }
    }
    cout << fixed << setprecision(3) << ans;
    return 0;
}
