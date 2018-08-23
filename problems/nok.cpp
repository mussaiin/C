#include <iostream>
using namespace std;
int main ()
{
int a,b,x,y;
cin>>a>>b;
x=a;
y=b;
while(a!=0&&b!=0)
{
if(a>=b)a=a%b;
else
if(a<b)b=b%a;
}
 cout<<(x*y)/(a+b);
return 0;

}
