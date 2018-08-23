#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c,d,x1,x2;
double d1;
cin>>a>>b>>c;
d1=b*b-4*a*c;
cout<<"x1="<<(-b+sqrt(d1))/2*a<<endl;
cout<<"x2="<<(-b-sqrt(d1))/2*a<<endl;
system ("pause");
return 0;
}