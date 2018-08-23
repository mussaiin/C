#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
ll m, k, len=0, a[100], sum=0, pw=1, b;
string s;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>m;
while(m)
{
 	s+=m%2+'0';
 	s/=2;
}
return 0; 
}  
