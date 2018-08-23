#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <vector>
using namespace std;
long long n, a[1000000], ans, k=0, k1=0, sum=0, byki=0, korovi=0;
string s, c;
int main()
{
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 cin>>s>>c;
 if (s==c)
 {
	 cout<<'4'<<" "<<'0';
 return 0;
 }
 for (int i=0;i<s.size();i++)
 {
	 if (s[i]==c[i])
	 {
		 byki++;
	 }
 }
 for (int i=0;i<s.size();i++)
 {
	 for (int j=0;j<s.size();j++)
	 {
		 if (s[i]==c[j])
		 {
			 korovi++;
		 }
	 }
 }
 cout<<byki<<" "<<korovi-byki;
 return 0;   
}