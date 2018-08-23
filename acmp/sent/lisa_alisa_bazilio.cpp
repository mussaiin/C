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
 long long i, j, n, m, a[1050];
int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
cin>>n;
	if(n%5==0)
	{
		cout<<n/5<<" "<<0;
	return 0;
	}
	if((n-3)%5==0)
	{    	
		cout<<n/5<<" "<<1;
	return 0;
	}
	if((n-6)%5==0)
	{
		cout<<n/5-1<<" "<<2;
	return 0;
	}
	if((n-9)%5==0)
	{
		cout<<n/5-1<<" "<<3;
	return 0;
	}
	if((n-12)%5==0)
	{
		cout<<n/5-2<<" "<<4;
	return 0;
	}
	if((n-15)%5==0)
	{
		cout<<n/5-3<<" "<<5;
	return 0;
	}
	if((n-18)%5==0)
	{
		cout<<n/5-4<<" "<<6;
	return 0;
	}
return 0;
}