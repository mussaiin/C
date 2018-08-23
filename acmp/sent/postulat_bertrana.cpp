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
int ans=0;
bool used[100000];
double n;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>n;
for(int i=2; i<=n*2; i++)
{
	used[i]=true;
}          
for(int i=2; i<=n*2; i++)
{
     if(used[i])
 	{
		for(int j=i+i; j<=n*2; j+=i)
		{
		 	used[j]=false;	
		}
	}
}
for(int i=n+1; i<=n*2; i++)
{
	if(used[i])
	{
		ans++;
	}	
}
cout<<ans;
return 0; 
}  
