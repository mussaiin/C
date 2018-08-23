#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{         
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout);
 long long n, ans=0;
 string s;
 cin>>n;
 for(int i=1; i<=n; i++)
 {
   cin>>s;
   if(s[0]==s[3])
   {
   	ans++;
   }
 }
  cout<<ans;
return 0;     
}                    

