#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<cstdio>
using namespace std;
double x, y, x1, Y1, otvet;
int main()
{
    freopen("angle2.in", "r", stdin);
    freopen("angle2.out", "w", stdout);
    cin>>x>>y>>x1>>Y1;
    otvet = acos((x * x1 + y * Y1) /  (sqrt(x*x+y*y) * sqrt(x1*x1+Y1*Y1)));
    printf("%.20f", otvet);
    return 0; 
}