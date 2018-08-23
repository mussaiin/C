/*
	Floyd and Numbers
	DP
	Kali Aisultan
*/

#include <bits/stdc++.h>

using namespace std;

bool calced[2][1000][100];
long long d[2][1000][100];
int a[100], k, sz;

void ClearIt () {
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 90; j++)
			for (int q = 0; q < 90; q++)
				d[i][j][q] = 0, calced[i][j][q] = false;
}

long long go (bool sp, int pos, int modAll) {
	if (pos == sz)
		return !(modAll % k);

	if (calced[sp][pos][modAll])
		return d[sp][pos][modAll];

	calced[sp][pos][modAll] = true;

	long long res = 0;
	if (sp)
		for (int i = 0; i <= a[pos]; i++)
			res += go (i == a[pos], pos + 1, ((modAll % k) + ((i == 1) % k)) % k);
	else
		for (int i = 0; i <= 2; i++)
			res += go (0, pos + 1, ((modAll % k) + ((i == 1) % k)) % k);
	return d[sp][pos][modAll] = res;
}

long long calculate (int q) {
	ClearIt();
	sz = 0;
	while (q > 0) {
		a[sz++] = q % 3;
		q /= 3;
	}
	reverse (a, a + sz);
	return go (1, 0, 0);
}

int main () {
	#ifdef AKALI
		freopen ("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	int t = 1;
	while (t--) {
		long long a, b;
		scanf ("%lld%lld%d", &a, &b, &k);
		printf ("%lld\n", ((calculate (b) - calculate (a - 1))));
	}
	return 0;
}
