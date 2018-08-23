#include <iostream> 
using namespace std; 
int main() 
{ 
freopen ("input.txt","r",stdin); 
freopen ("output.txt","w",stdout); 
int n,x; 
int k1=0,k0=0; 
cin >> n; 
while (n > 0){ 
cin >> x; 
if (x == 0){k0=k0+1;} 
else {k1=k1+1;} 
n=n-1; 
} 
if (k0 < k1) cout << k0; 
else cout<<k1; 
return 0; 
}