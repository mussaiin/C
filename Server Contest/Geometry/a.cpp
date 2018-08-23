#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long x,y,x2,y2,ans;
int main()
{         
 freopen("angle1.in","r",stdin); 
 freopen("angle1.out","w",stdout);
 cin>>x>>y;
 if(y>=0)
	printf("%.20f",acos(x/sqrt(x*x+y*y)));
 else 
	printf("%.20f",M_PI+acos(-x/sqrt(x*x+y*y)));
return 0;     
}                    