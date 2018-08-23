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

int n, m, a[1001], b[1001], d[1001][1001];

int main(){
	freopen("lcs.in", "r", stdin);
	freopen("lcs.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 1; i <= m; i++)
		cin >> b[i];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++){
			if (a[i] == b[j])
				d[i][j] = d[i - 1][j - 1] + 1;
			else
				d[i][j] = max(d[i - 1][j], d[i][j - 1]);
		}
	cout << d[n][m];
	return 0;
}
