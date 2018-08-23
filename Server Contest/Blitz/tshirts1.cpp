#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
using namespace std;
const int M = 1e9;
const int N = 2005;
int n;
int a[N];
unsigned int d[N][N], L[N][N], R[N][N];
int main()
{
freopen("tshirts.in","r",stdin);
freopen("tshirts.out","w",stdout);

    cin>>n;
    for (int i = 1; i <= n; i++)
        cin>>a[i];
    for (int len = 1; len <= n; len++)
    {
        for (int l = 1; l <= n - len + 1; l++)
        {
            int r = l + len - 1;
            L[l][r] = (L[l][r] + L[l][r - 1]) % M;
            R[l][r] = (R[l][r] + R[l + 1][r]) % M;
            if (len == 1)
            {
                d[l][r] = 1;
            }
            else if (a[l] == a[r])
            {
                d[l][r] = (2 * d[l + 1][r - 1] + L[l][r] + R[l][r] + 3) % M;
                L[l][r + 1] = (L[l][r + 1] + d[l + 1][r - 1] + 1) % M;
                R[l - 1][r] = (R[l - 1][r] + d[l + 1][r - 1] + 1) % M;
            }
            else
            {
                d[l][r] = (2 + d[l + 1][r - 1] + L[l][r] + R[l][r]) % M;
            }
        }
    }
    cout << d[1][n] % M;
    return 0;
}
