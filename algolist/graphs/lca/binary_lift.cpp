#include <iostream>
#include <string.h>
#include <vector>
#include <cstdio>

using namespace std;

const int MAX_N = 100500;
const int MAX_LOG_N = 20;

int n, m, root;
int _log;

vector < vector < int > > g;

int timer = 0;

int p[MAX_N][MAX_LOG_N];
int tin[MAX_N], tout[MAX_N];

bool upper(int a, int b) {
	return tin[a] <= tin[b] && tout[b] <= tout[a];
}

void dfs(int v, int pr = 0) {
	tin[v] = ++timer;
	p[v][0] = pr;
	for (int i = 1;i <= _log;++i)
		p[v][i] = p[p[v][i-1]][i-1];
	for (int i = 0;i < g[v].size();++i) {
		int to = g[v][i];
		if (to != pr)
			dfs(to);
	}
	tout[v] = ++timer;
}

int lca(int a, int b) {
	if (upper(a, b))
		return a;
	if (upper(b, a))
		return b;
	for (int l = _log;l >= 0;--l)
		if (!upper(p[a][l], b))
			a = p[a][l];
	return p[a][0];
}

int main() {
	/* Reading Graph */
	timer = 0;
	memset(tin, -1, sizeof tin);
	memset(tout, -1, sizeof tout);
	_log = 0;
	while ((1 << _log) <= n)
		++_log;
	dfs(root);
	scanf("%d", &m);
	for (int i = 0;i < m;++i) {
		int a, b;
		scanf("%d%d", &a, &b);
		cout << lca(a, b) << endl;
	}
}
