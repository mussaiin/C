#include <iostream>
#include <cmath>
using namespace std;
int num(int n){
    return n % 10;
}
int pow10(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= 10;
    }
    return ans;
}
int n, ans, k;
int main(){
    freopen("numbers.in", "r", stdin);
    freopen("numbers.out", "w", stdout);

    cin >> n;
    for(int i = pow10(n - 1); i < pow10(n); i++){
            k = num(i);
        if(abs(k - ((i - k) / 10)) <= 1)
            ans++;
    }
    cout << ans;
    return 0;
}
