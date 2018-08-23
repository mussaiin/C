#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
int nod(int a , int b)
{
    if(b==0)
    	return a;
    return nod(b, a%b);
}
int main()
{
freopen ("input.txt", "r", stdin);
freopen ("output.txt", "w", stdout);
 int  k, a, d, b, c;
 cin>>k>>a;
 d=nod(k,a);
 if(d>2)
 {
	for (int i=0; i<d; i++)   
	{
		cout<<1; 
	}                 
 return 0; 
 }
 if(k==a)    
 {
	for (int i=1; i<=k; i++)
	{	
		cout<<1;
	}	  
 return 0;    
 }
 if(k%2==0 && a%2==0)   
 {
	cout<<11;                
 return 0; 
 }  
 else    
 {
	cout<<1; 
 return 0;
 }
 return 0;
}
