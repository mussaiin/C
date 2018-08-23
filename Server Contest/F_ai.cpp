#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

typedef long long i64;

const int P = 1000000007;

const int MAXN = 200000;

i64 x[MAXN];
i64 y[MAXN];
i64 c[MAXN];

i64 solve(i64 *x, int n) {
	sort(x, x + n);
	int m = 0;
	for (int i = 0; i < n; ++i) {
		if (!i || x[i] != x[i - 1]) {
			x[m] = x[i];
			c[m++] = 0;
		}
		++c[m - 1];
	}
	i64 result = 0;
	i64 d = c[0];
	i64 e = x[0] * c[0] % P;
	for (int i = 1; i < m; ++i) {
		result = (result + d * x[i] % P * c[i] % P - e * c[i] % P) % P;
		d += c[i];
		e = (e + x[i] * c[i]) % P;
	}
	return result;
}

int main() {
	freopen("F.in", "r", stdin);
	freopen("F.out", "w", stdout);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x[i] >> y[i];
	}
	i64 result = (solve(x, n) + solve(y, n)) % P;
	if (result < 0) result += P;
	cout << result << endl;
	return 0;
}