#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

#define pub(x) push_back(x)

using namespace std;

const int MAX_N = 1050;

int n, k, m;

int mt[MAX_N];
bool used[MAX_N];

vector < int > g[MAX_N];

bool kuhn(int x) {
	if (used[x]) return false;
	used[x] = true;
	for (size_t i = 0;i < g[x].size();++i) {
		int to = g[x][i];
		if (mt[to] == -1 || kuhn(mt[to])) {
			mt[to] = x;
			return true;
		}
	}
	return false;
}

int main() {
	memset(mt, -1, sizeof mt);

	scanf("%d%d%d", &n, &k, &m);

	for (int i = 0;i < m;++i) {
		int x, y;
		scanf("%d%d", &x, &y);
		g[x-1].pub(y-1);
		g[y-1].pub(x-1);
	}

	for (int i = 0;i < n;++i) {
		memset(used, 0, sizeof used);
		kuhn(i);
	}

	vector < pair < int, int > > res;

	for (int i = 0;i < k;++i)
		if (mt[i] != -1)
			res.pub(make_pair(mt[i]+1, i+1));
	cout << res.size() << endl;
	for (size_t i = 0;i < res.size();++i)
		cout << res[i].first << " " << res[i].second << endl;
}
