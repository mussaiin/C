#include <iostream>
#include <cstdio>
using namespace std;
int n, a[10001], len = 1, p = -36000;
int main(){
    freopen("sequence.in", "r", stdin);
    freopen("sequence.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1; i <= n - 1; i++){
        if(a[i] <= a[i + 1]){
            len++;
            p = max(len, p);
        }
        else
        {
            p = max(len, p);
            len = 1;
        }
    }
    cout << p;
    return 0;
}
