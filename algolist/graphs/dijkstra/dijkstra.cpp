#include <cstdio>
#include <set>
#include <utility>
#include <cstring>
#include <vector>

using namespace std;

const int MAX_N = 1000;

int from, to, n;
int d[MAX_N], f[MAX_N];
set < pair < int, int > > s;

vector < pair < int, int > > g[MAX_N];

void print(int to, int fr) {
	if (to == fr) {
		printf("%d", to);
		return;
	}
	print(f[to], fr);
	printf(" -> %d", to);
}

int main() {
	//This graph is represented in adjacency list
	scanf("%d", &n);
	for (int i = 0;i < n;++i) {
		int x;
		scanf("%d", &x);
		g[i].resize(x);
		for (int j = 0;j < x;++j) {
			int to, cst;
			scanf("%d%d", &to, &cst);
			g[i][j] = make_pair(to, cst);
		}
	}
	scanf("%d%d", &from, &to);
	memset(d, 127, sizeof d);
	memset(f, -1, sizeof f);
	s.insert(make_pair(0, from));
	d[from] = 0;
	while (!s.empty()) {
		int x = s.begin() -> second;
		s.erase(s.begin());
		for (size_t i = 0;i < g[x].size();++i)
			if (d[g[x][i].first] > d[x] + g[x][i].second) {
				s.erase(make_pair(d[g[x][i].first], g[x][i].first));
				d[g[x][i].first] = d[x] + g[x][i].second;
				f[g[x][i].first] = x;
				s.insert(make_pair(d[g[x][i].first], g[x][i].first));
			}
	}
	if (f[to] == -1) {
		printf("No path has been found.\n");
		return 0;
	}
	printf("%d\n", d[to]);
	print(to, from);
	printf("\n");
}

