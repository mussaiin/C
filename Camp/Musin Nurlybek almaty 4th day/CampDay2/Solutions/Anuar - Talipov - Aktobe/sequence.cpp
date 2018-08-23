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

int n, d[1001], a[1001], maxs;

int main(){
	freopen("sequence.in", "r", stdin);
	freopen("sequence.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	d[0] = 1;
	for (int i = 1; i < n; i++){
		int maxk = 0;
		for (int j = i - 1; j >= 0; j--){
			if (a[i] % a[j] == 0){
				maxk = max(maxk, d[j]);
			}
		}
		d[i] = maxk + 1;
	}
	for (int i = 0; i < n; i++)
		maxs = max(maxs, d[i]);
	cout << maxs;
	return 0;
}
