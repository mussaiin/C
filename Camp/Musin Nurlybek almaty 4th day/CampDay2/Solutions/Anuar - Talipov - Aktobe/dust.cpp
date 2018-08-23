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

bool used[1001];
int n, weight, cnt;
vector < pair <double, double> > v;
double total, ans;

bool cmp(pair <double, double> a, pair <double, double> b){
	return (a.first / a.second) > (b.first / b.second);
}

int main(){
	freopen("dust.in", "r", stdin);
	freopen("dust.out", "w", stdout);
	cin >> n >> weight;
	for (int i = 0; i < n; i++){
		int c, w;
		cin >> c >> w;
		v.push_back(make_pair(c, w));
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n && total < weight; i++){
		double tmp = weight - total;
		if (tmp > v[i].second){
			total += v[i].second;
			ans += v[i].first;
		}
		else {
			total += tmp;
			ans += (tmp / v[i].second) * v[i].first;
		}
	}
	cout << fixed << setprecision(4) << ans;
	return 0;
}
