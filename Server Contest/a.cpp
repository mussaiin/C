#include<iostream> 			 																													//solution bu Musin Nurlybek AKTL
#include<fstream>
#include<algorithm>
#include<cstdio>
#include<math.h>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<ctime>          
#define pb push_back
#define pob pop_back
#define INF 99999999
#define MAXN 100000000
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
ll n, a, b, c, res, eps;
double ans;
int main()
{
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
 cin>>n;
 ans=sqrt(n);
 res=ans;
 a=ans; 
 if(a==ans)
 {
// 	cout<<"Yes";
	a+=2;
 }            
 else
 {
// 	cout<<"No";
	a++;
 }
 cout<<a;
return 0;
}
