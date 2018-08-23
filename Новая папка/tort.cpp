  #include<iostream> 
using namespace std; 
int main() 
{ 
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
int n,k,s=0; 
cin>>n; 
for( k=1;k<=n;k++){ 
if(n%k==0)s=s+k; 
} 
cout<<s; 
system ("pause");
return 0;
}