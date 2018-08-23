 //Yeslambekov Alibi
 # include <iostream>
 # include <cstdio>
 # include <cstdlib>
 using namespace std;
 int ans, n, a[10001], d[10001], ma;
 int main ()
 {
     freopen ("sequence.in", "r", stdin);
     freopen ("sequence.out", "w", stdout);
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
         cin >> a[i];
         d[i] = 1;
     }
     for (int i = 2; i <= n; i++)
     {
         for (int j = 1; j < i; j++)
          if (!(a[i] % a[j]))
           if (d[j] > ma)
            ma = d[j];
         d[i] += ma;
         if (d[i] > ans)
          ans = d[i];         
     }
     cout << ans;
     return 0;
 }
