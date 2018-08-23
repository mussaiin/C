#include<iostream>
using namespace std;
int a,b[100000],c,y;
bool x=0;
int main() 
{
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b[i];
	}
	cin>>c;
	for(int i=0;i<c;i++)
	{
		x=false;
		cin>>y;
		int l=0,r=a-1;
		int m=(l+r)/2;
		while(r>=l)
		{
			m=(l+r)/2;
			if(b[m]==y)
			{
				x=true;
				cout<<"YES";
				break;
			}
			else if(b[m]>y)
			{
	 			r=m-1;
	        }
			else if(b[m]<y)
			{
	      		l=m+1;
	      	}
		}
	    if(x==false)
	    {
			cout<<"NO";
		}
	}
	return 0;           
}