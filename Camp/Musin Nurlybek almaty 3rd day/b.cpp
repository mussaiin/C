#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int st[10005],sz=0;
void push(int x){
	st[++sz]=x;
	if(st[sz]==')' && st[sz-1]=='(')
		sz-=2;
	if(st[sz]=='}' && st[sz-1]=='{')
		sz-=2;
	if(st[sz]==']' && st[sz-1]=='[')
		sz-=2;
}
int top(){
 	return st[sz-1];
}
void pop(){
 sz--;
}
int main()
{                   	
freopen ("brackets.in","r",stdin);
freopen ("brackets.out","w",stdout); 
 string s;
 cin>>s;
 for(int i=0; i<s.length(); i++)
 {
  push(s[i]);
 }
 if(sz==0)
 cout<<"YES";
 else
 cout<<"NO";
 return 0; 
}  
         
