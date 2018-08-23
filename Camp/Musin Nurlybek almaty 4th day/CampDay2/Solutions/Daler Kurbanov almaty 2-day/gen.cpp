#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#define INF 1000000000
using namespace std;
int n = 1;
int main()
{
freopen ("sequence.in","w",stdout);
cout<<"100\n";
for (int i=1;i<=100;i++)
cout<<n<<" ", n*=2, n%=INF;
return 0;
}
