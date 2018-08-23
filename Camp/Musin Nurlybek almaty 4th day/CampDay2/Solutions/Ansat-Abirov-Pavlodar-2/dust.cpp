#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
ifstream cin("dust.in");
ofstream cout("dust.out");
int n, m, d[1000001];
float c[1000001], a[1000001], b[1000001];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i] >> b[i];
        float c1 = (a[i] / b[i]);
        c[i] = c1;
        d[i] = i;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (c[i] > c[j])
            {
               swap(c[i], c[j]);
               swap(a[i], a[j]);
               swap(b[i], b[j]);
            }
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (m < b[d[i]])
           if (m != 0) 
           {
              double res = a[d[i]] * m / b[d[i]];
              sum += res;
              break;
           }
           else break;
        sum += a[d[i]];
        m -= b[d[i]];
    }
    cout << fixed << setprecision(3) << sum;
    return 0;
}
