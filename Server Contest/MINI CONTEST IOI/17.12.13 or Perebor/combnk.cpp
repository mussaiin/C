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
ll a[200], n, k, kol=0;
int i, j;
 void rec(int x)
 {
 	if(x==n+1)
 	{
 	 	kol=0;
 	 	for(i=1; i<=n; i++)
		{
			if(a[i]==1)
		 	{
		 		kol++;
		 	}
		 }
	     	if(kol==k)
	     	{
 	 			for(i=1; i<=n; i++)
	 	 		{	
	 	 	 		cout<<a[i];
	 	 		}
	 	  	 cout<<endl;
	    		}
	    	
 	}
 	else
 	{
 	 	a[x]=0;
 	 	rec(x+1);
 	 	a[x]=1;
 	 	rec(x+1);
 	}
 }
int main()
{
cin>>n>>k;
rec(1);
return 0; 
}  
