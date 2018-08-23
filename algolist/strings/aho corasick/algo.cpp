#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>

using namespace std;

const int MAX_N = 10000;
const int K = 30;

int sz = 0;

struct vertex {
	int link;
	vector < int > words;
	int p;
	char c;
	int next[K];
	int go[K];
} vt[MAX_N*K];

void init(int k) {
	vt[k].link = -1;
	vt[k].words.resize(0);
	vt[k].p = -1;
	vt[k].c = -1;
	memset(vt[k].next, -1, sizeof vt[k].next);
	memset(vt[k].go, -1, sizeof vt[k].go);
}

void add_string(string &s) {
	int v = 0;
	for (size_t i = 0;i < s.length();++i) {
		if (vt[v].next[s[i]-'a'] == -1) {
			init(sz);
			vt[sz].c = s[i]-'a';
			vt[sz].p = v;
			vt[v].next[s[i]-'a'] = sz++;
		}
		v = vt[v].next[s[i]-'a'];
	}
	vt[v].words.push_back(v);
}

int go(int, int);

int get_link(int v) {
	if (vt[v].link != -1)
		return vt[v].link;
	if (v == 0 || vt[v].p == 0)
		vt[v].link = 0;
	else
		vt[v].link = go(get_link(vt[v].p), vt[v].c);
	return vt[v].link;
}

int go(int v, int c) {
	if (vt[v].go[c] != -1)
		return vt[v].go[c];
	if (vt[v].next[c] != -1)
		vt[v].go[c] = vt[v].next[c];
	else
		vt[v].go[c] = (v == 0 ? 0 : go(get_link(v), c));
	return vt[v].go[c];
}

int n;
string s;

void print_word(int v) {
	if (v == 0)
		return;
	print_word(vt[v].p);
	cout << (char)(vt[v].c + 'a');
}

void debug(int v = 0, char p = '-') {
	cout << v << " " << p << " " << (char)(vt[v].c + 'a') << endl;;
	for (int i = 0;i < K;++i)
		if (vt[v].next[i] != -1)
			debug(vt[v].next[i], vt[v].c+'a');
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf("%d\n", &n);
	init(0);
	sz = 1;
	for (int i = 0;i < n;++i) {
		getline(cin, s);
		add_string(s);
	}
	for (int i = 1;i < sz;++i) {
		int x = get_link(i);
		for (size_t j = 0;j < vt[x].words.size();++j)
			vt[i].words.push_back(vt[x].words[j]);
	}
	char c;
	int v = 0;
	bool exists[MAX_N*K];
	memset(exists, 0, sizeof exists);
	while (cin >> c) {
		v = go(v, c-'a');
		for (size_t i = 0;i < vt[v].words.size();++i)
			exists[vt[v].words[i]] = true;
	}
	for (int i = 0;i < MAX_N*K;++i)
		if (exists[i]) {
			print_word(i);
			cout << endl;
		}
}
