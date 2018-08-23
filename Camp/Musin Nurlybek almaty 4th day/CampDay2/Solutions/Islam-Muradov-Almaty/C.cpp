#include<fstream>
#include<iostream>
using namespace   std;
int main()
{
ifstream cin("input.txt");
ofstream cout("output.txt");
int n,a[333][333],s=0;
cin>>n;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
cin>>a[i][j];
   for(int i=1;i<=n;i++)
   for(int j=1;j<=n;j++){
    if(a[i][j]==1) s++;
    }    
    cout<<s/2;
    return 0;
    }