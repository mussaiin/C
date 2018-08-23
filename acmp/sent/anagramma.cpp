#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
int main()
{         
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout);
 char s[85];
 cin>>s;
 next_permutation(s, s+strlen(s));
 cout<<s;
return 0;     
}                    