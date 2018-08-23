#include <iostream>
using namespace std;
int n, m, a[1001], b[1001], s, f;
int main(){
    freopen("lcs.in", "r", stdin);
    freopen("lcs.out", "w", stdout);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    for(int i = 1; i <= m; i++)
        cin >> b[i];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i] == b[j])
                s = a[i];
            f = a[i + 1];
        }
    }
    return 0;
}
