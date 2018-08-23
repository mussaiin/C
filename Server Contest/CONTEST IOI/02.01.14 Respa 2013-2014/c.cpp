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
ll n, d, ans;
int i, j;
string s;
int main()
{
freopen("C.in", "r", stdin);
freopen("C.out", "w", stdout); 
cin>>n>>d;
if(n==1)
{
		for(int i=1; i<=9; i++)
		{
			if(d!=i)
			{
				cout<<i<<endl;
			}	
		}
}
if(n==2)
{
		for(int i=1; i<=9; i++)
		{
			for(int j=1; j<=9; j++)
			{
				if(d!=i && d!=j)
				{
					cout<<i<<j<<endl;
				}	
			}
		}
}
if(n==3)
{
		for(int i=1; i<=9; i++)
		{
			for(int j=1; j<=9; j++)
			{
				for(int k=1; k<=9; k++)
				{
					if(d!=i && d!=j && d!=k)
					{
						cout<<i<<j<<k<<endl;
					}	
				}
			}
		}
}
if(n==4)
{
		for(int i=1; i<=9; i++)
		{
			for(int j=1; j<=9; j++)
			{
				for(int k=1; k<=9; k++)
				{
				 	for(int z=1; z<=9; z++)
					{
						if(d!=i && d!=j && d!=k && d!=z)
						{
							cout<<i<<j<<k<<z<<endl;
						}	
					}
				}
			}
		}
}
return 0; 
}  
