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
#define FNAME "dust"
using namespace std;
int n, w, x, y;
double sum = 0;
pair <double, double> a[1111];
int main(){
	freopen(FNAME".in", "r", stdin);
	freopen(FNAME".out", "w", stdout);
	scanf("%d%d", &n, &w);
	for(int i = 1; i <= n; i ++){
		cin >> x >> y;
		a[i].F = x;
		a[i].S = y;
	}
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= n; j ++)
			if(a[i].F / a[i].S > a[j].F / a[j].S) 
				swap(a[i].F, a[j].F), swap(a[i].S, a[j].S);
	int i = 1;
	while(w >= 0){
	if(a[i].S <= w){
		sum += a[i].F;
		w = w - a[i].S;
		i ++;
		}
	else if(a[i].S > w){
		sum += a[i].F / a[i].S * w;
		goto L;
		}
	}
	L:;
	printf("%.3f", sum);
	return 0;
}
