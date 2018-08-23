#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
int factor(int n){
	if(n<0)  
	{
		return 0;
	}
	 if(n<=2)
	 {
		return n;        
	 }
	else 
	{
		return n*factor(n-1);
	}
}                                
int main(){
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
int n;
cin>>n;
cout<<factor(n);
return 0;
}

