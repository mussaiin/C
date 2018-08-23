#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int d[100][100];
int sum;
int n;
  int main()
{
// freopen("numbers.in","r",stdin);
  //  freopen("numbers.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {cin>>d[i][j];
}
for(int i=0;i<=n;i++)
    for(int j=0;j<=9;j++)
    {
            if(d[1][j]) cout<<"1";}
            if(d[1][0]) cout<<"0";
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
{if(j==1||j==2||j==3||j==4||j==5||j==6||j==7||j==8)
d[i][j]=d[i-1][j]+d[i-1][j+1];
else
if(j==0) d[i][0]=d[i-1][0]+d[i-1][1];
else 
if(j==9)
d[i][9]=d[i-1][9]+d[i-1][2];
}
for(int j=1;j<=n;j++)
   sum+=d[n][j];
   // system("pause");
    return 0;
}
