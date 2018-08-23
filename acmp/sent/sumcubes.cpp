#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#include<map>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
ll ans;
int i, j,n,from;
int a[100];
double tri=3;
void rec(int n, int x){
     if (x>8)
     return;
 	if(n==0 && x<=8)
 	{
 	 	for(int j=0; j<x; j++)
 	 	cout<<a[j]<<" ";
 	 	exit(0);
 		return;
 	}
 	int y=(int)pow((double)n,1/tri);
 	if(x>7)return;
 	for(int i=y; i>=1; i--)
 	{
 	 	if(n-i*i*i>=0){
 	 		a[x]=i;
	 	 	rec(n-i*i*i, x+1);
 		}
 	}
}
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin >> n ;
rec(n,0);
cout<<"IMPOSSIBLE";
return 0; 
}  
