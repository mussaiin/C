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
 void rec(int x, int place, int open, int kl)
 {
 	if(x==n*2+1)
 	{
 	 	kol=0;
 	 	for(i=1; i<=n*2; i++)
		{
			if(a[i]==0)
		 	{
		 		kol++;
		 	}
		 	else
		 	{
		 	 	kol--;
		 	}
		 	if(kol<0)
		 	{
		 	 	break;
		 	}
		 }
	     	if(kol==0)         
	     	{
 	 			for(i=1; i<=n*2; i++)
	 	 		{	
	 	 			if(a[i]==0)
	 	 			{
	 	 				cout<<"(";
	 	 			}
	 	 			else cout<<")";
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
cin>>n;
rec(1);
 return 0; 
}  
         
