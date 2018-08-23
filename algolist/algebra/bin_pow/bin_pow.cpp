#include <cstdio>
long long MOD = 1000000000000000000ll;
long long bin_mult(long long a, long long b) {
	long long res = 0ll;
	
	while (b) {
		if (b & 1)
			res += a;
		a += a;
		res %= MOD;
		a %= MOD;
		b >>= 1;
	}
	return res;
}
long long bin_pow(long long a, long long b) {
	long long res = 1ll;
	while (b) {
		if (b & 1)
			res = bin_mult(res, a);
		a = bin_mult(a, a);
		b >>= 1;
	}
	return res;
}
int main() {
	long long a, b;
	scanf("%I64d%I64d", &a, &b);
	printf("%I64d\n", bin_pow(a, b));
}
