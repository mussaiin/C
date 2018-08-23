#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int MAX_N = 1000500;

string s;
int pi[MAX_N];

int main() {
	cin >> s;
	for (size_t i = 1;i < s.length();++i) {
		int j = pi[i-1];
		while (j > 0 && s[j] != s[i])
			j = pi[j-1];
		if (s[j] == s[i]) ++j;
		pi[i] = j;
	}
}