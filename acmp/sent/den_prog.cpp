#include <iostream> 
using namespace std; 
int main()
{ 
int a; 
cin>>a; 
    if (a%400==0 || (a%4==0 && a%100!=0)) cout<<"12/09/"; 
      else cout<<"13/09/"; 
  if (a<10) cout<<"0";
  if (a<100) cout<<"0";
  if (a<1000) cout<<"0";
cout<<a; 
return 0; 
}