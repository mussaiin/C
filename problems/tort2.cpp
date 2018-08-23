 #include<iostream> 
using namespace std; 
int main() 
{ 
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout); 
int a;
cin>>a; 

if (a>1) 
{if (a%2==0) cout<<a/2; 
else 
if (a%2!=0) cout<<a; 

} 
if (a<=1) cout<<0; 
system ("pause");
return 0;
}