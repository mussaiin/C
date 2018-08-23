#include<iostream>
#include<fstream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    freopen("numbers.in","r",stdin);
    freopen("numbers.out","w",stdout);
    int n,c=0;
    int d[101][101];
    cin>>n;
    d[1][1]=1;
    d[1][2]=1;
    d[1][3]=1;
    d[1][4]=1;
    d[1][5]=1;
    d[1][6]=1;
    d[1][7]=1;
    d[1][8]=1;
    d[1][9]=1;
    d[1][0]=0;
    for (int i=2; i<=n; i++){
        for (int j=1; j<=8; j++){
        d[i][j]=d[i-1][j]+d[i-1][j-1]+d[i-1][j+1];}
        d[i][0]=d[i-1][0]+d[i-1][1];
        d[i][9]=d[i-1][9]+d[i-1][8];
        }
        for (int j=0; j<=9; j++){
            c+=d[n][j];
            }
        cout<<c;
        //system("pause");
        return 0;
        }
