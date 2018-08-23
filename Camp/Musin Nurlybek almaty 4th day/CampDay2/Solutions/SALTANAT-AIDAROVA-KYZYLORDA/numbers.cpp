#include <iostream>
#include <fstream>
using namespace std;
long long  d[111][111],n;
int main ()
{
    freopen("numbers.in","r",stdin);
    freopen("numbers.out","w",stdout);
    cin>>n;
    d[1][0]=0;
    long long cr=0;
    for(int i=1; i<=9; i++)
    {
            d[1][i]=1;
            }
    
    for(int i=2; i<=n; i++)
    {
            for(int j=1; j<=8; j++)
            {
            d[i][j]=d[i-1][j]+d[i-1][j-1]+d[i-1][j+1];}
            d[i][0]=d[i-1][0]+d[i-1][1];
            d[i][9]=d[i-1][9]+d[i-1][8];
            }
            for(int i=0; i<=9; i++)
            {
                    cr+=d[n][i];
                    }
                    cout<<cr;
    return 0;
}
