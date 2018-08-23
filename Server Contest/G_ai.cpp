#include <iostream>
#include <cstdio>

using namespace std;

const int MAXN = 100000;

int a[MAXN * 2];
int b[MAXN];
char s[MAXN + 1];
int f[MAXN];

int main() {
	freopen("G.in", "r", stdin);
	freopen("G.out", "w", stdout);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) {
			if (s[j] == '*') a[j] |= 1 << i;
		}
	}
	for (int i = 0; i < n; ++i) {
		cin >> s;
		for (int j = 0; j < m; ++j) {
			if (s[j] == '*') b[j] |= 1 << i;
		}
	}

	for (int i = 0; i < m; ++i) {
		a[m + i] = a[i];
	}

	f[0] = 0;
	int j = 0;
	for (int i = 1; i < m; ++i) {
		while (j > 0 && b[j] != b[i]) {
			j = f[j - 1];
		}
		if (b[j] == b[i]) ++j;
		f[i] = j;
	}
	j = 0;
	for (int i = 0; i < 2 * m; ++i) {
		while (j > 0 && b[j] != a[i]) {
			j = f[j - 1];
		}
		if (b[j] == a[i]) ++j;
		if (j == m) {
			cout << i - m + 1 << endl;
			j = f[j - 1];
			break;
		}
	}
	return 0;
}