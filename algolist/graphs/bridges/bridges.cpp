//UVa Online Judge #796
#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <string.h>
#include <algorithm>

using namespace std;

const int MAX_N = 1000500;

int n;

vector < vector < int > > g;

vector < pair < int, int > > res;

int tin[MAX_N];
int fup[MAX_N];

int _time;

void dfs(int x, int p = -1) {
	tin[x] = fup[x] = ++_time;
	for (int i = 0;i < g[x].size();++i) {
		int to = g[x][i];
		if (to == p)
			continue;
		if (tin[to] != -1)
			fup[x] = min(fup[x], tin[to]);
		else {
			dfs(to, x);
			fup[x] = min(fup[x], fup[to]);
			if (fup[to] > tin[x])
				res.push_back(make_pair(min(x, to), max(x, to)));
		}
	}
}

int main() {
	while (scanf("%d", &n) == 1) {
		g.assign(n, vector < int > (0));
		res.resize(0);
		memset(tin, -1, sizeof tin);
		fill(fup, fup + MAX_N, 1000000000);
		_time = 0;
		for (int i = 0;i < n;++i) {
			int f, to;
			int num;
			scanf("%d (%d)", &f, &num);
			for (int j = 0;j < num;++j) {
				scanf("%d", &to);
				g[f].push_back(to);
			}
		}
		for (int i = 0;i < n;++i)
			if (tin[i] == -1)
				dfs(i);
		sort(res.begin(), res.end());
	   	printf("%d critical links\n", res.size());
	   	for (int i = 0;i < res.size();++i)
	   		printf("%d - %d\n", res[i].first, res[i].second);
	   	cout << "\n";
	}
}
