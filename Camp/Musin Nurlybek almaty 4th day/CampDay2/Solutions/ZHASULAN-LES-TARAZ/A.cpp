#include<iostream>

using namespace std;
int main(){
   freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    int n,m,b[10000],a[100000],i,j,s=0,c=0,g,h,d=0;
    cin>>n;
    for(i=1;i<=n;i++){
       cin>>b[i];}
       
                
                          
                          for(i=1;i<=n;i++){
                                            if(b[i-1]>b[i]){
                                                            s++;
                                                           
                                                            }
                                            
                                            }
                                            cout<<n-s;  
    //system("pause");
        return 0;
        } 