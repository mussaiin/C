#include <queue>
int n, t;
int g[100][100];
queue < int > q;
int s, t;
int d[100];
int main() {
	//Reading graph
	q.push(s);
	d[s] = 0;
	p[s] = -1;
	while (q.size()) {                
		int x = q.front();
		if (x == t) {
			cout << d[x];
			return 0;
		}
		q.pop();
		for (int i = 1;i <= n;++i)
			if (g[x][i] && !used[i]) {
				d[i] = d[x] + 1;
				p[i] = x;
				used[i] = true;
				q.push(i);
			}
	}
	int sz = 0;
	char a[100];
	while (t != -1) {
		c[sz++] = p[t];
		t = p[t];
	}
	while (sz > 0)
		cout << a[--sz] << " ";
	cout << "impossible\n";
}