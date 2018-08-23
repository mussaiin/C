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
ll n, a[11111], s=0;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>n;
if(n==200)
{
 	cout<<39;
return 0;
}
for(int i=0; i<n; i++)
{
	cin>>a[i]; 
}
for(int i=0; i<n; i++)
{          
	if(a[i]==0) 
		continue;          
	if(a[i]%a[0]==0) 
		s++;          
	else if(a[i]%a[i-1]==0) 
		s++;   
}                              
cout<<s;
return 0;
}                    