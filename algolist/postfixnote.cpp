#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int  st[300], sz=0;
void push(char x){
	 if(x>='0' && x<='9'){
  	 st[++sz]=x-48;
  	 }
	 if(x=='+')
	 {	
	 	st[sz-1]+=st[sz];
	 	sz--;
	 }
	 if(x=='-')
	 {
	  	st[sz-1]-=st[sz];
	  	sz--;
	 }
	 if(x=='*')
	 {
	  	st[sz-1]*=st[sz];
	  	sz--;
	 }
}
int top(){
 	return st[sz-1];
}
void pop(){
 sz--;
}
     
int main()
{                   	
 char x;
 while(cin>>x)
 {
 	push(x);
 }
 cout<<st[1]; 
 return 0;
}  
         
