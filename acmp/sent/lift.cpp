#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
 long long z, n, i, j, t, maxi=0, maxs=0, ans=0;
 int b;
 bool used[1050];
 string s;
int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
	cin>>s;
	for(i=1; i<=200; i++)
	{
	 	used[i]=false;
	}
	for(j=1; j<=200; j++)
	{
	 	z=j;
		for(i=0; i<=s.size(); i++)
		{
		 	used[z]=true;
		 	if(s[i]=='1')
		 	{ 
		 		z++; 
		 	}
		 	if(s[i]=='2')
		 	{ 
		 		z--; 
		 	}
		 	if(z>maxi)
		 	{
		 	 	maxi=z; 
		 	}
		 	if(z==0)
		 	{ 
		 		break; 
		 	}
		 }
		 b=1;
		 while(used[b])
		 {
		  	b++;
		  	ans++;
		 }
		 if(ans>maxs)
		 {
		 	maxs=ans;
		 	ans=0;
		 }
		 for(t=0; t<=100; t++)
		 {
		 	used[t]=false;
        	 }
	}
cout<<maxs;
return 0;
}