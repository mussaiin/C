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
string a, b, c;
long long per;
long long pr(string k)
{
 long long l=0, i;
 	for(i=0; i<k.length(); i++)
 	{
		l*=10;
		l+=k[i]-'0';
	}
 return l;	
}
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
int i, j;
cin>>a>>b>>c;
for(i=1; i<=c.size(); i++)
{
 	reverse(a.begin(), a.end());
 	reverse(b.begin(), b.end());
 	while(next_permutation(a.begin(), a.end()))
 	{
 		while(next_permutation(b.begin(), b.end()))
 		{
 			if(a+b==c)
 			{
 				cout<<"YES"<<endl;
	 			cout<<a<<" "<<b;
 			}
 		}
 	}
}
cout<<"NO";
return 0;    
}  
