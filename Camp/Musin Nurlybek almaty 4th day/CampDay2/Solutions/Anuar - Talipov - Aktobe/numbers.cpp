#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstdio>
#include <deque>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>

using namespace std;

const int INF = 1e9;
const double EPS = 1e-6;

int n, d[21][21], ans;

int main(){
	freopen("numbers.in", "r", stdin);
	freopen("numbers.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= 9; i++)
		d[1][i] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 0; j <= 9; j++)
			for (int k = 0; k <= 9; k++)
				if (abs(k - j) <= 1)
					d[i][j] += d[i - 1][k];
	for (int i = 0; i <= 9; i++)
		ans += d[n][i];
	cout << ans;
	return 0;
}
