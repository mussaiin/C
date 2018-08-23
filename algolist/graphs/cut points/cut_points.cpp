#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>

using namespace std;

const int MAX_N = 100500;

int _time = 0;

int n;

int tin[MAX_N];
int fup[MAX_N];

vector < int > g[MAX_N];
int res[MAX_N];

void dfs(int x, int p = -1) {
	int num_of_children = 0;
	tin[x] = fup[x] = _time++;
	for (size_t i = 0;i < g[x].size();++i) {
		int to = g[x][i];
		if (to == p)
			continue;
		if (tin[to] != -1)
			fup[x] = min(fup[x], tin[to]);
		else {
			++num_of_children;
			dfs(to);
			fup[x] = min(fup[x], fup[to]);
			if (tin[x] <= fup[to] && p != -1)
				res[++res[0]] = x;
		}
	}
	if (p == -1 && num_of_children > 1)
		res[++res[0]] = x;
}

int main() {
	// Reading Graph
	memset(tin, -1, sizeof tin);
	fill(fup, fup + MAX_N, 1000000000);
	for (int i = 0;i < n;++i)
		if (tin[i] == -1)
			dfs(i);
	cout << res[0] << "\n";
	for (int i = 1;i <= res[0];++i)
		cout << res[i] << " ";
}
