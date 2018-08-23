#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
using namespace std;
long long ans=0;
int i, j, k;
string n;
bool used[100000];
int main()
{
 freopen ("input.txt", "r", stdin);
 freopen ("output.txt", "w", stdout);
 cin>>n;
 for(i=0; i<n.length(); i++)
 {
  	for(j=i+1; j<n.length(); j++)
  	{
  	 	for(k=j+1; k<n.length(); k++)
  	 	{
  	 	     if(used[(n[i]-'0')*100+(n[j]-'0')*10+n[k]-'0']==false && n[i]!='0')
  	 	     {
  	 	      	ans++;
  	 	      	used[(n[i]-'0')*100+(n[j]-'0')*10+n[k]-'0']=true;
  	 	     }
  	 	}	
  	}
 }
 cout<<ans;
return 0;
}