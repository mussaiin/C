#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct fenwick {
private:
	vector < int > t;
public:
	fenwick() {
	}

	fenwick(int n) {
		t.assign(n, 0);
	}

	fenwick(vector < int > v) {
		t.assign(t.size(), 0);
		for (int i = 0;i < v.size();++i)
			inc(i, t[i]);
	}

	void inc(int idx, int val) {
		for (;idx < t.size();idx |=(idx + 1))
			t[idx] += val;
	}

	int sum(int r) {
		int result = 0;
		for (;r >= 0;r = (r & (r + 1)) - 1)
			result += t[r];
		return result;
	}

	int sum(int l, int r) {
		return sum(r) - sum(l-1);
	}
};

int main() {
	fenwick t;
	int n, a[100];
	cin >> n;

	t = fenwick(n);

	for (int i = 0;i < n;++i) {
		cin >> a[i];
		t.inc(i, a[i]);
	}

	int m;
	cin >> m;

	for (int i = 0;i < m;++i) {
		int l, r;
		cin >> l >> r;
		cout << t.sum(l, r) << endl;
	}
}
