#include <iostream>
#include <cstdio>

using namespace std;

typedef long long i64;

int main() {
	freopen("E.in", "r", stdin);
	freopen("E.out", "w", stdout);

  i64 a, b, c, d, e, f, n, m;
  cin >> a >> b >> c >> d >> e >> f >> n >> m;

  i64 xx = (m + c - 1) / c;
  i64 yy = (m + f - 1) / f;

  i64 g = xx * a + b * m;
  i64 h = yy * d + e * m;
  if (g * n >= h * n) {
    cout << h * n << " " << 0 << " " << n * yy << endl;
  } else {
    cout << g * n << " " << n * xx << " " << 0 << endl;
  }
  return 0;
}
