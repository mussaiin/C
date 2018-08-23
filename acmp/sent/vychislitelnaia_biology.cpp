#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
ll k=0;
string n, m, s="";
getline(cin, n);
getline(cin, m);
for (int i=0;i<m.size();i++)
{
	if (m[i]==n[k])
     {
      	s+=m[i];
          k++;
          continue;
     }
}
if (n==s)
{
	cout<<"YES";
return 0;
}
cout<<"NO";
return 0;
}
