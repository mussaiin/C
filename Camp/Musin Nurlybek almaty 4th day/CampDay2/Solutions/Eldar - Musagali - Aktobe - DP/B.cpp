#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int w, n, r[1001], t[1001], p = -36000;
int main(){
    freopen("dust.in", "r", stdin);
    freopen("dust.out", "w", stdout);
    cin >> n >> w;
    for(int i = 1; i <= n; i++){
        cin >> r[i] >> t[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(t[i] + t[j] <= w)
                p = max(p, r[i] + r[j]);
            else if(t[i] == w)
                p = max(p, r[i]);
            else if(t[j] == w)
                p = max(p, r[j]);
        }
    }
    cout << p << setprecision(4) << fixed;
    return 0;
}
