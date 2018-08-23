#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);
string s;
int b,a,h;
cin>>s;
a=s[1]-48;
b=s[4]-48;
h='H';
if (s[2]!='-' || b>8 || a>8 || b<=0 || a<=0|| char(s[0])-0>72 || char(s[3])-0>72)
{
cout<<"ERROR";
return 0;
}
 
if ((abs((char(s[0]-0)-(char(s[3])-0)))) + abs(b-a)==3 || b==a && char(s[0])==char(s[3]))
{
cout<<"YES";
return 0;
}
cout<<"NO";
return 0;
}