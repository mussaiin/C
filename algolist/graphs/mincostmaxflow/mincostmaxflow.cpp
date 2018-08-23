#include <cstring>
#include <cstdio>
#include <vector>

const int INF = 1000000000;
const int MAX_N = 220;

inline int min(int a, int b) {
	return a < b ? a : b;
}

struct edge {
	int to, f, c, cost, id;
	edge() {to = f = c = cost = id = 0;}
	edge(int to, int f, int c, int cost, int id) :to(to), f(f), c(c), cost(cost), id(id) {}
};

int n, N, s, t;
int id[3 * MAX_N], d[3 * MAX_N];
int from[3 * MAX_N], fromEdge[3 * MAX_N];
int dq[3 * MAX_N];
int qh, qt;

std :: vector < edge > g[3 * MAX_N];

void addEdge(int from, int to, int c, int cost) {
	edge e = edge(to, 0, c, cost, (int)g[to].size());
	edge e2 = edge(from, 0, 0, -cost, (int)g[from].size());
	g[from].push_back(e);
	g[to].push_back(e2);
}

int main() {
	freopen("F.in", "r", stdin);
	freopen("F.out", "w", stdout);
	scanf("%d", &n);
	for ( int i = 0; i < n; ++i ) {
		int x;
		for ( int j = 0; j < n; ++j ) {
			scanf("%d", &x);
			addEdge(i, n + j, 1, x);
		}
	}
	N = 2 * n;
	s = N++; t = N++;
	for (int i = 0;i < n;++i) {
		addEdge(s, i, 1, 0);
		addEdge(i + n, t, 1, 0);
	}
	int flow = 0, cost = 0;
	while (true) {
		for (int i = 0;i < N;++i) d[i] = INF;
		memset(id, 0, sizeof id);
		qh = qt = 0;
		d[s] = 0;
		dq[qt++] = s;
		while (qh != qt) {
			int x = dq[qh++];
			if (qh == N) qh = 0;
			id[x] = 2;
			for ( size_t i = 0; i < g[x].size(); ++i ) {
				int to = g[x][i].to;
				if (g[x][i].f < g[x][i].c && d[to] > d[x] + g[x][i].cost) {
					if (id[to] == 0) {
						dq[qt++] = to;
						if (qt == N) qt = 0;
					}
					if (id[to] == 2) {
						if (--qh == -1) qh = N - 1;
						dq[qh] = to;
					}
					id[to] = 1;
					d[to] = d[x] + g[x][i].cost;
					from[to] = x;
					fromEdge[to] = i;
				}
			}
		}
		if (d[t] == INF) break;
		int addFlow = INF;
		for ( int x = t; x != s; x = from[x] ) {
			int pv = from[x], pe = fromEdge[x];
			addFlow = min(addFlow, g[pv][pe].c - g[pv][pe].f);
		}
		for ( int x = t; x != s; x = from[x] ) {
			int pv = from[x], pe = fromEdge[x], r = g[pv][pe].id;
			g[pv][pe].f += addFlow;
			g[x][r].f -= addFlow;
			cost += g[pv][pe].cost * addFlow;
		}
		flow += addFlow;
	}
	printf("%d\n", cost);
	for ( int i = 0; i < n; ++i )
		for ( size_t j = 0; j < g[i].size(); ++j )
			if (g[i][j].c == g[i][j].f && g[i][j].c != 0)
				printf("%d ", g[i][j].to - n + 1);
	printf("\n");
	return 0;
}
