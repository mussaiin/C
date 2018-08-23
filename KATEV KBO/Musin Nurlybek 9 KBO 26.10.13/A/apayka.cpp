#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
freopen ("apayka.in","r",stdin);
freopen ("apayka.out","w",stdout); 
 int d,h,m,ans,a,b,c;
 cin>>d>>h>>m;
 a=(d-11);
 b=(h-11);
 c=(m-11);
 ans=((a*24)*60)+(b*60)+c;
 if(ans<0)
 {
  cout<<"-1";
 }
 else
 {
  cout<<ans;
 }
return 0; 
}  
         