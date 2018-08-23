#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	freopen("A.in", "r", stdin);
	freopen("A.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int r = 0;
	while (n >= m) {
		r += m;
		n -= m;
		if (n == 1) {
			break;
		}
		n /= 2;
	}
	r += n;
	cout << r << endl;
	return 0;
}