#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
int main()
{         
 freopen ("input.txt","r",stdin); 
 freopen ("output.txt","w",stdout); 
 string s; 
 long long ans=1;
 cin>>s;
 sort(s.begin(), s.end());
 while(next_permutation(s.begin(), s.end())){
 	ans++;
 }
 cout<<ans;
return 0;     
}                    