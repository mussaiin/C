#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;
ifstream cin("sequence.in");
ofstream cout("sequence.out");
int n, a[1001], maxx;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        int c = 0;
        for (int j = i; j <= n; j++) if (a[j] % a[i] == 0) c++;
        if (c > maxx) maxx = c;
    }
    cout << maxx;
    return 0;
}
