#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long n, m, a, b, c, ans, maxi, w, k, a1, b1, a2, b2, a3, b3;
string s;
int main()
{         
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout);
cin>>k>>w>>a1>>b1>>a2>>b2>>a3>>b3;
if (a1+a2<=w && b1+b2>=k)  
{
	cout<<"YES";
return 0;
}
if (a1+a3<=w && b1+b3>=k)  
{
	cout<<"YES";
return 0;
}
if (a2+a3<=w && b2+b3>=k)  
{
	cout<<"YES";
return 0;
}
if (a1+a2+a3<=w && b1+b2+b3>=k)  
{
	cout<<"YES";
return 0;
}
if (a1<=w && b1>=k)  
{
	cout<<"YES";
return 0;
}
if (a2<=w && b2>=k)  
{
	cout<<"YES";
return 0;
}
if (a3<=w && b3>=k)  
{
	cout<<"YES";
return 0;
}
else 
{
	cout<<"NO";
}
return 0;
}