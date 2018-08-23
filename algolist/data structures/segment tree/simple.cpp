
#include <iostream>

using namespace std;

struct tree {
private:
	int n;
	int t[2*100000];
	void build(int *a, int v = 0, int tl = 0, int tr = 0) {
		if (tl == tr)
			t[v] = *(a+tl);
		else {
			int tm = (tl + tr) >> 1;
			build(a, (v << 1) + 1, tl, tm);
			build(a, (v << 1) + 2, tm+1, tr);
			t[v] = t[(v << 1) + 1] + t[(v << 1) + 2];
		}
	}
public:
	tree(int *a, int n) {
		this -> n = n;
		build(a);
	}
	int sum(int l, int r, int v = 0, int tl = 0, int tr = 0) {
		if (!v)
			tr = n-1;
		if (l > r)
			return 0;
		if (l == tl && r == tr)
			return t[v];
		int tm = (tl + tr) >> 1;
		return sum(l, min(r, tm), (v << 1) + 1, tl, tm) +
			sum(max(l, tm+1), r, (v << 1) + 2, tm+1, tr);
	}

	void update(int pos, int x, int v = 0, int tl = 0, int tr = 0) {
		if (!v)
			tr = n-1;
		if (tl == tr)
			t[v] = x;
		else {
			int tm = (tl + tr) >> 1;
			if (pos <= tm)
				update(pos, x, (v << 1) + 1, tl, tm);
			else
				update(pos, x, (v << 1) + 2, tm+1, tr);
			t[v] = t[(v << 1) + 1] + t[(v << 1) + 2];
		}
	}
};

void update(int pos, int x) {
	for (;pos < N;pos |= (pos + 1))
		t[pos] += x;
}

int sum(int pos) {
	if (pos == -1)
		return 0;
	int res = 0;
	for (;pos >= 0;pos = (pos & (pos + 1)) - 1)
		res += t[pos];
	return res;
}

int sum(int l, int r) {
	return sum(r) - sum(l-1);
}

int main() {
	int a[1000];
	int n;

	cin >> n;

	for (int i = 0;i < n;++i)
		cin >> a[i];
	
	tree t(a, n);

	while(true) {
		int l, r;
		cin >> l >> r;
		cout << t.sum(l, r) << endl;
	}
}

