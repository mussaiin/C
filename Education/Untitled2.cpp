#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int n, m;
int a[111111];

int main () {
	freopen("firesafe.in", "r", stdin);
	freopen("firesafe.out", "w", stdout);
	
	cin >> n >> m;
	
	int sum;
	int b;
	vector<int> ans, ans2, sum1;
	vector<int> v[n];
	
	for(int i = 1; i <= 2 * m; i += 2) {
		cin >> a[i] >> a[i + 1];
		ans.push_back(a[i]);
		ans2.push_back(a[i+1]);
	}
	for(int i = 0; i < ans2.size(); i ++) {
		for(int j = 0; j < ans.size(); j ++) {
			if(ans2[i] == ans[j]) goto l;
		}
		sum1.push_back(ans2[i]);
		l:;
	}
	cout << sum1.size() << endl;
	
	for(int i = 0; i < sum1.size(); i ++) {
		cout << sum1[i] << " ";
	}
	
	return 0;
}
