#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
freopen ("havchik.in","r",stdin); 
freopen ("havchik.out","w",stdout); 
int n, x, y, k=0;
cin>>n;
char a[105][105];
 for(int i=1; i<=n; i++)
 {
    for(int j=1; j<=n; j++)
    {
	cin>>a[i][j];
        {
        if(a[i][j] == '.' && a[i][j-1] == '.')
        k++;
        }
        {
        if(a[i][j] == '.' && a[i-1][j] == '.')
        k++;
        }
        {
        if(a[i][j] == '.' && a[i+1][j] == '.')
        k++;
        }
	{
        if(a[i][j] == '.' && a[i][j+1] == '.')
        k++;
        }
    }
 }
cin>>x>>y;
cout<<k;
return 0;
}                         	
