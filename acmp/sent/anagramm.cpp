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
 freopen("input.txt", "r", stdin); 
 freopen("output.txt", "w", stdout);
 string s1, s2;
 cin>>s1>>s2;
 sort(s1.begin(), s1.end());
 sort(s2.begin(), s2.end());	
 	if(s1!=s2)
 	{
 		cout << "NO";
 	return 0;
 	}
 else cout<<"YES";
return 0;     
}                    