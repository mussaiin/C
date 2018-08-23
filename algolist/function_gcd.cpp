#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <deque>
using namespace std;
int gcd (int a, int b) 
{
	if (!b) return a;
	return gcd(b, a%b);
}
int a, b;
int main()
{
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>a>>b;
	cout<<gcd(a, b);
	return 0;
}	