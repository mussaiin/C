#include <iostream> 
#include <cmath>
using namespace std; 
int main () 
{ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout);
double x,x2,y,y2; 
cin>>x>>y>>x2>>y2; 
double a=((x-x2)*(x-x2))+((y-y2)*(y-y2)); 
a=sqrt(a);
printf("%5f", a);   
return 0;
}