#include <iostream>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <numeric>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int backpack(const int* weight, const int* cost, int V, int N)
{
        int* a = new int[V+1];
        a[0] = 0;
        for(int i=1; i<=V; ++i) {
            a[i] = a[i-1];
            for(int j=0; j<N; ++j)
                if (weight[j]<=i)
                    a[i] = max(a[i], a[i-weight[j]] + cost[j]);
        }
        int maxCost = a[V];
        return maxCost;
}
int main()
{
	freopen("dust.in","r",stdin)
	freopen("dust.out","w",stdout);
    int N, V;
   	cin >> N;
	cin >> V;
    int* weight = new int[N];
    int* cost = new int[N];
    for(int i=0; i<N; ++i) 
	{
		cin >> cost[i];
		cin >> weight[i];
    }
   	int c=backpack(weight, cost, V, N);
   	cout<<fixed<<setprecision(3)<<c;
    return 0;
}
