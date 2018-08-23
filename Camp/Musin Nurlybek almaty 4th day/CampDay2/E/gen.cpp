#define _CRT_SECURE_NO_DEPRECATE
#pragma comment (linker, "/STACK:30000000")

#include <string>
#include <vector>
//#include <cmath>
//#include <queue>
//#include <set>
//#include <map>
#include <algorithm>
#include <iostream>
//#include <cstdio>
#include <sstream>
//#include <cassert>
//#include <utility>

using namespace std;

#define EPS 1E-8
const int INF = (int)1E+9;

#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end()
#define pb push_back
#define PII pair<int, int>
#define mp make_pair
#define VI vector<int>
#define VS vector<string>

FILE *f = 0;
int tst = 0;

void close() {
	if (f != 0) {
	   	fclose(f);
   		f = 0;
	}
}

const int NMAX = 2000;

FILE *open() {
	close();
	char fname[10];
	sprintf(fname, "%.2d", ++tst);
	cerr << tst << endl;
	return f = fopen(fname, "wt");
}

int random(int value)
{
	return ((((unsigned int)rand()) << 15) ^ ((unsigned int)rand())) % value;
}

vector<int> randomString(int l, int k) {
	vector<int> s;
	forn(i, l) s.pb(random(k) + 1);
	return s;
}

vector<int> randomPalindrom(int l, int k) {
	vector<int> s = randomString(l / 2, k);
	vector<int> sr = s;
	reverse(all(sr));
    if (l % 2 == 1) s.pb(random(k) + 1);
	s.insert(s.end(), sr.begin(), sr.end());
	return s;
}

vector<int> randomInsert(vector<int> s, int l, int k) {
	forn(i, l - (int)s.size()) {
		int pos = random(s.size() + 1);
		vector<int> c = vector<int>(s.begin(), s.begin() + pos);
		c.pb(random(k + 1));
		c.insert(c.end(), s.begin() + pos, s.end());
		s = c;
	}
	return s;
}

string toStr(vector<int> a) {
	ostringstream out;
	out << a.size() << endl;
	forv(i, a) {
		if (i > 0) out << " ";
		out << a[i];
	}
	return out.str();
}

void outdata() {
}

void sample() {
	open();
	fprintf(f, "4\n1 2 3 1\n");
}

void solve() {
	sample();
	for(int i = 2; i <= NMAX; i = (i == NMAX ? NMAX + 1 : min(NMAX, i * 2 + random(2)))) {
		open();
		fprintf(f, "%s\n", toStr(randomString(i, 1)).c_str());
		open();
		fprintf(f, "%s\n", toStr(randomString(i, 3)).c_str());
	}
	for(int i = 2; i <= NMAX; i = (i == NMAX ? NMAX + 1 : min(NMAX, i * 2 + random(2)))) {
		int j = random(1000000000) + 1;
		int len = min(NMAX, i * 2);
		open();
		vector<int> s = randomPalindrom(i, j);
		s = randomInsert(s, len, j);
		fprintf(f, "%s\n", toStr(s).c_str());
	}
}

void readdata() {
}

int main() 
{
	readdata();
	solve();
	outdata();
	return 0;
}

