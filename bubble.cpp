#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
 int n,a[1000];
 cin>>n;
 for(int i=1; i<=n; i++)
 {
  cin>>a[i];
 }
  for(int i=1; i<=n-1; i++)
  {
    for(int j=i+1; j<=n; j++)
    {
      if(a[i]>a[j])
      swap(a[i],a[j]);
    }
  }
   for(int i=1; i<=n; i++)
   {
  cout<<a[i]<<"  ";
  }
return 0; 
}  
