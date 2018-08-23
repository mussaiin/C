#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 int a, b, c, d, res=1; 
 cin>>a>>b;
 while (b!=0)
 {
 	if (b%2==0)
 	{
 		a=((a%10)*(a%10))%10;
 		b/=2;
 	}
 	else    
 	{
 		res=((res%10)*(a%10))%10;
 		b--;     
 	}
 }
 cout<<res;
return 0;
}