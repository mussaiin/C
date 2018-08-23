#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<map>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int n, a[1000], w[20], r=-1, sum, sum1;
int main()
{
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout); 
cin>>n;
for(int i=0; i<n; i++)
{
 cin>>w[i];
}
for(int i=0; i<n; i++)
{
 	sum=0; sum1=0;
 	for(int j=0; j<n; j++)
 	{
 		if((i & (1 << j)) > 0)
          {
          	sum+=a[j];
          }   
          else
          {
               sum1+=a[j];
          }
 	}
 	if (r==-1 || r>abs(sum-sum1))
     {
     	r=abs(sum-sum1);
     }
}
cout<<r;
return 0; 
}  
