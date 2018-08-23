#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
long long n, a[100001], root;
int main()
{
 cin>>n;
  for (int i=1; i<=n; i++)
   {
  		cin>>a[i];
	    	root = sqrt(a[i]);
    		if(root*root==a[i])
	    	{
    			cout<<1<<" ";
    		}
	    	else
	    	{
		    	cout<<0<<" ";
	    	}
    }
return 0;     
}
