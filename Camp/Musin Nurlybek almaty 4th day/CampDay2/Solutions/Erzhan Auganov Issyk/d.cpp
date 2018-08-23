#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int n, m, a[1111], b[1111],d[1111][1111];

int main ()
{
freopen ("lcs.in", "r", stdin);
freopen ("lcs.out", "w", stdout);
 cin >> n;
 for (int i = 1; i <= n; i++)
 cin >> a[i];
 cin >> m;
 for (int i = 1; i <= m; i++)
 cin >> b[i];
 for (int i = 1; i <= n; i++) d[i][1] = 1;
for (int i = 1; i <= m; i++) d[1][i] = 1;
for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
        if (a[i] == b[j])
            d[i][j] = d[i - 1][j - 1] + 1;
        else if (d[i - 1][j] >= d[i][j - 1])
            d[i][j] = d[i - 1][j];
        else
            d[i][j] = d[i][j - 1];
cout<<d[n][m];
 return 0;
}
