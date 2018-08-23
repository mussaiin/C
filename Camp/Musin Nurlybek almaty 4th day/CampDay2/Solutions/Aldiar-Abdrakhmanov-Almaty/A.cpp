#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//    freopen("sequence.in","r",stdin);    
//    freopen("sequence.out","w",stdout);
    long long n,a[11111],s=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
    if(a[i]==0) continue; 
    if(a[i]%a[0]==0) s++;
    else if(a[i]%a[i-1]==0) s++;
    }
    cout<<s; 
    return 0;
}
