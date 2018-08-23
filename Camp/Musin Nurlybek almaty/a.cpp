#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
//freopen ("sequence.in","r",stdin);
//freopen ("sequence.out","w",stdout); 
 long long n, a[44444], b[44444]={1}, ans=1, maxasd=-999999;
 cin>>n;                         
 for(int i=1; i<=n; i++)
 {
 	cin>>a[i];
 }
 for(int i=1; i<=n; i++){
 	for(int j=i-1; j>=1; j--){
 		if(a[i]!=0 && a[i]%a[j]==0 && b[j]>maxasd)
 		{
 			maxasd=b[j];
 			b[i]=maxasd+1;
 			ans=max(maxasd+1, ans);
 	  	}
     }
 }
 cout<<ans+1;
return 0; 
}  
         