#include <iostream>
#include <utility>
#include <string.h>
#include <vector>
#include <cstdio>
#include <set>

using namespace std;

const int MAX_N = 100500;

int n;
vector < pair < int, int > > g[MAX_N];
set < pair < int, int > > s;
int p[MAX_N];
int d[MAX_N];

int main() {
	/* Reading Graph */
	fill(d, d + MAX_N, 1000000000);
	memset(p, -1, sizeof p);
	s.insert(make_pair(0, 0));
	d[0] = 0;
	for (int it = 0;it < n;++it) {
		if (s.empty()) {
			cout << "Impossible";
			return 0;
		}
		int v = s.begin() -> second;
		s.erase(s.begin());
		if (p[v] != -1)
			cout << v << " " << p[v] << endl;
		for (size_t i = 0;i < g[v].size();++i) {
			int to = g[v][i].first, cost = g[v][i].second;
			if (cost < d[to]) {
				s.erase(make_pair(d[to], to));
				d[to] = cost;
				p[to] = v;
				s.insert(make_pair(d[to], to));
			}
		}
	}
}
