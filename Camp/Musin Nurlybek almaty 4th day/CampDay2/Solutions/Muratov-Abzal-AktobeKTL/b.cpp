#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

const int N = 1e3;
int V[N], W[N], n, w, i, j, k, ans;

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> V[i];
        cin >> W[i];
    }
    for(i = 0; i < n; ++i){
        for(j = 0 ; j < n; ++j){
            for(k = 0; k < n; ++k){
                if(W[i] + W[j] == w && W[k] == w){
                        if((W[i] + W[j]) > W[k])
                            ans = V[i] + V[j];
                        else
                            ans = V[k];
                }
                if(W[i] + W[k] == w && W[j] == w){
                        if((W[i] + W[k]) > W[j])
                            ans = V[k] + V[i];
                        else
                            ans = V[j];
                }
                if(W[k] + W[j] == w && W[i] == w){
                        if((W[k] + W[j]) > W[i])
                            ans = V[k] + V[j];
                        else
                            ans = V[i];
                }
            }
        }
    }
    cout << ans;
    return 0;
}
