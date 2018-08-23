#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int f(string s){
if (s=="one")return 1;
if (s=="two")return 2;
if (s=="three")return 3;
if (s=="four")return 4;
if (s=="five")return 5;
if (s=="six")return 6;
if (s=="seven")return 7;
if (s=="eight")return 8;
if (s=="nine")return 9;
}
int main()
{
freopen("ste.in", "r", stdin); 
freopen("ste.out", "w", stdout);
 long long n, m, res=1; 
 string s;
	cin>>s>>m;
	n=f(s);  
     for(int i=0; i<m; i++)
     {
     	res*=n;
  	}
cout<<res;
return 0; 
}
