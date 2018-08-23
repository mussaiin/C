#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

const int MAX_L = 100500;

string s;
int z[MAX_L];

int main() {
	cin >> s;
	z[0] = 0;
	for (int i = 1, l = 0, r = 0;i < (int)s.length();++i) {
		z[i] = 0;
		if (i <= r)
			z[i] = min(z[i-l], r-i+1);
		while (i + z[i] < (int)s.length() && s[z[i]] == s[i+z[i]])
			++z[i];
		if (i + z[i] - 1 > r) {
			l = i;
			r = i + z[i] - 1;
		}
	}
	for (size_t i = 0;i < s.length();++i)
		cout << z[i] << " ";
	cout << endl;
}
