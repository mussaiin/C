 //Yeslambekov Alibi
 # include <iostream>
 # include <cstdio>
 # include <cstdlib>
 # include <algorithm>
 # include <utility>
 using namespace std;
 pair <double, double> a[1001];
 double x, y, w, we, ans;
 int n;
 int main ()
 {
     freopen ("dust.in", "r", stdin);
     freopen ("dust.out", "w", stdout);
     cin >> n >> w;
     for (int i = 1; i <= n; i++)
     {
         cin >> x >> y;
         a[i] = make_pair (x / y, y);
     }
     sort (a + 1, a + n + 1);
     reverse (a + 1, a + n + 1);
     for (int i = 1; i <= n; i++)
     {
         if (a[i].second + we > w)
         {
             ans += (w - we) * a[i].first;
             break;
         }
         else
         {
             ans += a[i].first * a[i].second;
             we += a[i].second;
         }
     }
     cout.precision(3);
     cout << fixed << ans;
     return 0;
 }
