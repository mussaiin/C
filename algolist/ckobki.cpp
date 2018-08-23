#include<iostream>
#include<string>
using namespace std;
char a[1000000];
int r,i;
string c;
int main ()
{
	cin>>c;
	for(i=0;i<c.length();i++)
	{
    	a[r]=c[i];
    	r++;
    	if(r>1)
        {                        
      		if(a[r-1]==')' && a[r-2]=='(')
      		{
        		r-=2;
			}	  
		}
	}
    if(r==0)
    {
    	cout<<"Yes";
    }
    else
    {
    	cout<<"No";
    }
    return 0;
}