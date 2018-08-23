//By Elibay Nuptebek  
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
#define FNAME "numbers"
using namespace std;
int n, a[100000][10];
ll sum;
int main(){
//	freopen(FNAME".in", "r", stdin);
//	freopen(FNAME".out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= 9; i ++) a[1][i] = 1;
	
	for(int i = 2; i <= n; i ++)
		for(int j = 0; j <= 9; j ++)
			for(int k = 0; k <= 9; k ++)
				 if(abs(j - k) <= 1) a[i][j] += a[i - 1][k];
	
	for(int i = 0; i <= 9; i ++) sum += a[n][i];
	cout << sum;
	return 0;
}
