#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <cstdio>
#include <new>
#include <ctime>
using namespace std;
long long xx,yy,n,x,y,z;
int main()
{
srand (time(0));
//	freopen("combo.in","r",stdin);
	freopen("milktemp.in","w",stdout);
	n=rand()%500;
	cout<<n<<" ";
	x=rand()%200;
	z=rand()%200;
	y=rand()%200;
	cout<<x<<" "<<y<<" "<<z<<"\n";
	for (int i=1;i<=n;i++)
	{
		xx=rand()%400;
		yy=rand()%500;
		cout<<xx<<" "<<yy<<"\n";
	}
	return 0;
}                                                                                     
