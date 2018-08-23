#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
 freopen("data.in","r",stdin);
 freopen("data.out","w",stdout);
string s,t;
cin>>s>>t;
if(s.length()!=t.length()){
cout<<"NO";
return 0;
}
 for (int i=0;i<s.length();i++)
{
  if (s[i]!=t[i])
{
    swap(s[i],s[i+1]);
  break;
}
}
if(s == t)
cout<<"YES";
else 
cout<<"NO";                 
return 0; 
}  
