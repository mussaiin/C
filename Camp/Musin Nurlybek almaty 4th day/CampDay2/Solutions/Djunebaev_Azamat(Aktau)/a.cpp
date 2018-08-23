#include <iostream>
#include <fstream>
using namespace std;
int n, a[1111], k, ma = 1;
int main ()
{
    freopen ("sequence.in", "r", stdin);
    freopen ("sequence.out", "w", stdout);
    cin >> n;
    a[0] = 1;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0) continue;
        int l = a[i];
        for (int j = 1; j <= n; j++)
        {
            if (a[j] == 0) continue;
            else
            if (a[j] % l == 0)
                k++, l = a[j];
        }
        ma = max(ma, k);
        k = 0;
    }
    cout << ma;
    return 0;
}
