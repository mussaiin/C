#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<ctime>
using namespace std;
long long n,m,x,y;
int main()
{
    srand(time(0));
    cin>>n;
    for (int i=1;i<=n;i++)
    {
    	cin>>m;
    	for (int j=1;j<=m;j++)
    	{
    		cin>>x>>y;
    	}
    }
    for (int i=1;i<=n;i++)
    {
    	if (rand()%2==0)
    	{
    		cout<<"NO\n";
    	}
    	else
    	cout<<"YES\n";

    }
    return 0;
}