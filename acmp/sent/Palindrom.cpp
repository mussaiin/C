#include <iostream>
using namespace std;
int main()
{
freopen("input.txt", "r",stdin);
freopen("output.txt", "w",stdout);
int a,b,c,d,x; 
cin>>x; 
a=x/1000; 
b=x/100%10; 
c=x/10%10; 
d=x%10; 
if((a==d)&&(b==c)) 
cout<<"YES"; 
else
cout<<"NO"; 
}