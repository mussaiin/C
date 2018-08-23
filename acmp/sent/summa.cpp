#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int ans=0;
int sum(int n)
{
 ans+=n;
 if(n==1)
 return 0;
 sum(n-1);
}
int main(){
//  freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
int a;
cin>>a;
sum(a);
cout<<ans;
return 0; 
}  
