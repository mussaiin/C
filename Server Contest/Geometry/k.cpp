#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
double x,y,x2=1,y2=1, otvet;
int main()
{
    freopen("length.in", "r", stdin);
    freopen("length.out", "w", stdout);
    cin>>x>>y>>x2>>y2;
    otvet = sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
    printf("%.20f", otvet);
    return 0;
}                    