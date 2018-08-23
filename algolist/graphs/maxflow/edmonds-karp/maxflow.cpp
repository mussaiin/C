/* informatics.mccme.ru #2783 */
#include <iostream>
#include <vector>
#include <string.h>
#include <utility>
#include <cstdio>

#define mp make_pair

#define fi first
#define se second

using namespace std;

const int MAX_N = 20;

int n, m;
vector < int > c[MAX_N], f[MAX_N];
vector < int > _rind[MAX_N], dir[MAX_N];

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d %d", &n, &m);
	for (int i = 0;i < m;++i) {
		int F, T, C;
		scanf("\n%d %d %d", &F, &T, &C);
		--F; --T;
		c[F].push_back(C);
		f[F].push_back(0);
		dir[F].push_back(T);
		_rind[F].push_back(c[T].size());
		c[T].push_back(0);
		f[T].push_back(0);
		dir[T].push_back(F);
		_rind[T].push_back(c[F].size()-1);
	}
	int pr[MAX_N], ind[MAX_N];
	int q[MAX_N];
	int h = 0, t = 0;
	for (;;) {
		memset(pr, -1, sizeof pr);
		h = 0; t = 0;
		q[t++] = 0;
		pr[0] = 0;
		while (h < t) {
			int cur = q[h++];
			int to, flow;
			for (size_t i = 0;i < f[cur].size();++i) {
				to = dir[cur][i];
				flow = c[cur][i] - f[cur][i];
				if (pr[to] == -1 && flow > 0) {
					pr[to] = cur;
					ind[to] = i;
					q[t++] = to;
				}
			}
		}
		if (pr[n-1] == -1)
			break;
		int minf = 1000000000;
		for (int cur = n-1, flow;cur != 0;cur = pr[cur]) {
			flow = c[pr[cur]][ind[cur]] - f[pr[cur]][ind[cur]];
			if (minf > flow)
				minf = flow;
		}
		for (int cur = n-1;cur != 0;cur = pr[cur]) {
			f[pr[cur]][ind[cur]] += minf;
			f[cur][_rind[pr[cur]][ind[cur]]] -= minf;
		}
	}
	int res = 0;
	for (int i = 0;i < f[0].size();++i)
		res += f[0][i];
	cout << res << endl;
}
