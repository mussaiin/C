#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
     unsigned long long factorial (unsigned long long n)
     {
         unsigned long long f=1,i;
         for(i=2;i<=n;++i)
         {
             f=f*i;
         }
         return f;
     }
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
 unsigned long long n;
 cin>>n;
 cout<<factorial(n);
return 0;
}
