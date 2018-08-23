#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
ifstream cin("numbers.in");
ofstream cout("numbers.out");
long int sum;
int n, a[30][30];
int main()
{
    cin >> n;
    for (int i = 0; i <= 9; i++) a[i][1] = 1;
    for (int j = 2; j <= n; j++)
        for (int i = 0; i <= 9; i++)
        {
            if (i == 0) a[i][j] = a[i][j - 1] + a[i + 1][j - 1];
            if (i == 9) a[i][j] = a[i][j - 1] + a[i - 1][j - 1];
            if (i > 0 && i < 9) a[i][j] = a[i][j - 1] + a[i + 1][j - 1] + a[i - 1][j - 1];
        }
    for (int i = 1; i <= 9; i++) sum += a[i][n];
    cout << sum;
    return 0;
}
