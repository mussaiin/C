#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
 long long a, b, res=1, c; 
 long long mult(long long z, long long y){
 long long res1=0;
    while(y>0)
    {
	 if(y%2==1)
	 {
		  res1+=z;
		  res1%=c;
	 }
		y/=2;
		z+=z;
		z%=c;
   }
  return res1;
 }

int main()
{
 cin>>a>>b>>c;
	if (a==0 && b==0)
	{
		cout<<0;
	return 0;
	}
	res=1;
   while(b>0){
	if(b%2==1)
	{
		res=mult(res,a);
		b=b-1;
	}
		a=mult(a,a);
		b=b/2;
}        
cout<<res%c; 
return 0; 
}  
