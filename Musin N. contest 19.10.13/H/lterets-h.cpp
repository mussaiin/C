#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
 freopen("lterets.in","r",stdin);
  freopen("lterets.out","w",stdout);
string s;
getline(cin,s);
for(int i=1; i<s.length()-1; i++)
{ 
 if(s[i-1]<=122 && s[i-1]>=65 && s[i]<=122 && s[i]>=65 && s[i+1]<=122 && s[i+1]>=65 && s[i+2]<=122 && s[i+2]>=65)
 swap(s[i],s[i+1]);
}

cout<<s;
return 0; 
}  
