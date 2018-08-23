#include<algorithm>
#include<cstdio>
#include <iostream>
#include<cmath>
using namespace std;

long long n, d[1111][21], sum;

int main(){
freopen("numbers.in" , "r" , stdin);
freopen("numbers.out" , "w" , stdout);
cin >> n;

for (int i = 1; i <= 9; i ++ )
    d[1][i] = 1;

for (int i = 2; i <= n; i ++ ) {
	for (int j = 0; j <= 9; j ++ ) {
		for (int k = 0; k <= 9; k ++ ) {
			if (abs(j - k) <= 1)
                d[i][j] += d[i - 1][k];
		}

	}
}

for (int i = 0; i <= 9; i ++ )
    sum += d[n][i];
cout << sum;
return 0;
}
