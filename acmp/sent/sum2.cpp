#include<algorithm>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int a,b,c,d,n,k=0;
int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
	cin >> n ;
	for(a=1; a<=n; a++)
	{
		for(b=a; b<=n; b++)
		{
			for(c=b; c<=n; c++)
			{
				d = n - a - b - c;
				if(d<c)
				{
					continue;
					k++;
				}
			}
		}                                                                                         
	}
cout<<k;
return 0;
}
