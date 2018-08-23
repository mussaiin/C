#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
long long a, b, c, ans=0;
long long binmulti(long long x, long long y){
 	while(y>0){
		 if(y%2==1){
			  ans+=x;
			  ans%=c;
		 }
  	  		  y/=2;
  	  		  x+=x;
		 	  x%=c;
	}
	return ans;
}
long long binpw(long long x, long long y){
 ans=1;
 	while(y>0){
	 	if (y%2==1){
  			ans=mult(ans,x);
			ans%=c;
		}
  	y/=2;
  	x=mult(x,x);
  	x%=c;
  	}
	return ans;
}
int main (){
 cin>>a>>b>>c;
 cout<<binpw(a,b);
}
