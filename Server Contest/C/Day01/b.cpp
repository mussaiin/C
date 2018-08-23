#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int st[10005],sz=0,musin;
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
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
 string s;
 cin>>s;
 for(int i=0; i<s.length(); i++)
 {
  push(s[i]);
 }
 if(sz==0)
 cout<<0;
 else
 cout<<sz/2;
 return 0; 
}  
         
