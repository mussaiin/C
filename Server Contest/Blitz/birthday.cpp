#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
//freopen ("birthday.in","r",stdin);
//freopen ("birthday.out","w",stdout); 
long long n, ans=0; 
string s[300005];
cin>>n;
for(int i=0; i<n; i++) 
{
	cin>>s[i];
}
sort(s, s+n);
for(int i=1; i<=n; i++)
{
 	if(s[i]!=s[i-1])
 	ans++;
}
cout<<ans;
return 0;     
}
