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
int x, y, x2, y2, ya, xa, ansx, ansy;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>x>>y>>x2>>y2;
cin>>xa>>ya;
 ansx=2*x-xa;
 ansy=2*y-ya;
 if(x==x2)
 {
    cout<<ansx<<" "<<ya;   
 return 0;
 }
 if(y==y2)
 {
    cout<<xa<<" "<<ansy;
 return 0;
 }
return 0; 
}  
