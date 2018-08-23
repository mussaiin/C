#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    freopen("sequence.in","r",stdin);
    freopen("sequence.out","w",stdout);
    int n,cr,d[0],m=-1000;
    int a[1100];
    cin>>n;
    for (int i=1; i<=n; i++){
        cin>>a[i];
        }
        for (int i=1; i<=n; i++){
            cr=0;
            for (int j=1; j<=n; j++){
                if ((a[i]!=0) && (a[j]%a[i]==0)){
                cr++;
                }
                }
                m=max(m,cr);
                }
                cout<<m;
        //system("pause");
        return 0;
        }
