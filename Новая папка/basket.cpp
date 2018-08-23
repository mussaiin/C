#include <iostream>
using namespace std;
int main()
{
int a1,a2,a3,a4,b1,b2,b3,b4,a,b;
freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
a=a1+a2+a3+a4;
b=b1+b2+b3+b4;
if (a>b) cout<<"1"<<endl;
else if (a<b) cout<<"2"<<endl;
else cout<<"DRAW"<<endl;
system ("pause");
return 0;
}