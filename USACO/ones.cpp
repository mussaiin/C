// Solution by AKTL
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <deque>
#include <fstream>
#include <queue>
#include <stack>
#include <vector>
#include <iomanip>
#include <cstdio>
#include <new>
#define MATH_DEFINES
#define INF 99999999
#define pb push_back
#define pf push_front
#define pof pop_front
#define pob pop_back
#define f front
#define b back
using namespace std;
long long n,a[200];
int main()
{
    	freopen("ones.in","r",stdin);
	freopen("ones.out","w",stdout);
    a[1]=2;
    a[2]=4;
    a[3]=7;
    cin>>n;
    for (int i=4;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    cout<<a[n];
    return  0;
}
 
