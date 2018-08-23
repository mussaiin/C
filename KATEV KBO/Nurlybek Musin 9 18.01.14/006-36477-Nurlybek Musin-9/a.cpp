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
int n, k, p, kol, ans;
ll fact(ll n){
	if(n<0){ return 0; }
	if(n<=2){ return n; }
	else{ return (n*fact(n-1))%1000000000; }
}
int main()
{
freopen("cheating.in","r",stdin);
freopen("cheating.out","w",stdout);
cin>>n>>k>>p;
cout<<(fact(n)/(fact(n-k)*fact(k)))%p; 
return 0; 
}  
