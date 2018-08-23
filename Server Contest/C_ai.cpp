#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN = 100000;

const int P = 1000000007;

typedef long long i64;

int a[MAXN];
int u[MAXN];
i64 f[MAXN];

#define nx(x) ((x) | ((x) + 1))
#define pr(x) ((x) & ((x) + 1))

int n;

void add(int x) {
	while (x < n) {
		++u[x];
		x = nx(x);
	}
}

int sum(int x) {
	int r = 0;
	while (x >= 0) {
		r += u[x];
		x = pr(x) - 1;
	}
	return r;
}

int main() {
	freopen("C.in", "r", stdin);
	freopen("C.out", "w", stdout);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		--a[i];
	}
	f[0] = 1;
	for (int i = 1; i <= n; ++i) {
		f[i] = (f[i - 1] * i) % P;
	}
	i64 result = 0;
	for (int i = 0; i < n; ++i) {
		result += (a[i] - sum(a[i])) * f[n - 1 - i];
		add(a[i]);
		result %= P;
	}
	cout << result + 1 << endl;
	return 0;
}
