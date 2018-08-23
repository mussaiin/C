#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
long long  n, m, mid, r, l, pos, ans=0, a[100030], b[100030], q[100030];  
int main()
{
//freopen ("right.in","r",stdin);
//freopen ("right.out","w",stdout); 
 
 cin>>n>>m;
 
 for(int i=1; i<=n; i++){
  cin>>a[i];
 }
 
 for(int i=1; i<=m; i++){
  cin>>b[i];
 }
  
  for(int i=1; i<=m; i++){
   l=1; r=n; pos=1;
  	while(l<=r){
 	   mid=(l+r)/2;
 		if(a[mid]<=b[i]){
  			pos=mid;
			l=mid+1;
 		}
 		else
 			r=mid-1;
 
 		if(a[pos]==b[i]){
   			ans++;
   			q[i]=pos;
 		}
 		else
 		{       
  			ans++;
  			pos=0;
  		}	
	}
	}
	            	
	for(int i=1; i<=m; i++)
	{
  		cout<<q[i]<<endl;
	}
return 0;     
}
