 #include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
freopen ("console1.in","r",stdin);
freopen ("console1.out","w",stdout); 
string s,t[305];
long long n,i,j,ans=0;
cin>>n;
for(i=0;i<n;i++){
cin>>t[i];
}
while(getline(cin,s)){
ans++;
int sl=s.length();
for(j=0; j<n; j++)
{
int tl=t[j].length();
if(sl<tl)continue;
for(i=0;i<=sl-tl;i++){
if(s.substr(i,tl)==t[j]){
cout<<s<<endl;
}
}                                
}
}
return 0; 
}  
