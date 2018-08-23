#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#include<set>
#include<cstdio>
#include<cstdlib>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
ull n;

vector<pair<ull, ull> > s;
int main()
{
freopen ("A.in","r",stdin);
freopen ("A.out","w",stdout);
 cin >> n;
 for(int i = 1; i <= n / 2 + 1; i++)
 {                           
 	for(int j = i; j <= n / 2 + 1; j++)
 	{                               
 		if((((((j) * (j + 1)) / 2) - (i * (i - 1)) / 2)) == n)
 			s.pb(mp(i, j));	
 	}
 }	       
 s.pb(mp(n,n));
 cout << s.size() << endl;
 for(int i = 0; i < s.size(); i ++)
 	cout << s[i].first << " " << s[i].second << endl;
return 0; 
}  
