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
const int MOD = 1e9;

long long d[1001][1001], n, a[1001];

int main(){
	freopen("tshirts.in", "r", stdin);
	freopen("tshirts.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int k = 1; k <= n; k++){
		for (int i = 1; i <= n - k + 1; i++){
			int j = i + k - 1;
			if (i == j)
				d[i][j] = 1;
			else if (a[i] == a[j]){
				d[i][j] = (2 * d[i + 1][j - 1] + 3) % MOD;
				for (int q = j - 1; q > i; q--) {
					if (a[i] == a[q])
						d[i][j] += d[i + 1][q - 1] + 1;
				}
				for (int q = i + 1; q < j; q++) {
					if (a[j] == a[q])
						d[i][j] += d[q + 1][j - 1] + 1;
				}
			}
			else if (a[i] != a[j]){
				d[i][j] = (2 + d[i + 1][j - 1]) % MOD;
			}
		
		}
	}
	cout << d[1][n];
	return 0;
}
