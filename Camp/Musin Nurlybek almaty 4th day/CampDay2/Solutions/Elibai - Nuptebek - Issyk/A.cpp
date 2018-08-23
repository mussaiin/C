//By Elibai Nuptebek
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <string>
#include <cstdio>
#include <set>
#include <deque>
#include <queue>
#define ll long long
#define Inf 1000*1000*1000
#define F first
#define S second
#define MP make_pair
#define FNAME "sequence"
using namespace std;
ll n, a[1111], b[1111], sum, Sum;
int main(){
	freopen(FNAME".in", "r", stdin);
	freopen(FNAME".out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j < i; j ++)
			if(a[i] % a[j] == 0) b[i] = max(b[i], b[j] + 1);
	for(int i = 1; i <= n; i ++)
		sum = max(sum, b[i]);
	cout << sum + 1;
	return 0;
}
