#include <iostream>
#include <algorithm>
#include <cmath>
#include <fstream>
using namespace std;
 int a[1010], b[1010];
 int mergesort( int l, int r )
 { 
   if(l>=r)
   {
     return 0;
   }
   int mid=(l+r)/2;
   mergesort(l,mid);
   mergesort(mid+1, r);
   int i=l, j=mid+1, ln=0;
   while(i<=mid || j<=r)                                        
   {
      if(i<=mid && j<=r)
      {  
         if(a[i]<a[j])
	 {
	   b[++ln]=a[i++];
	 }
            else if(a[i]>a[j])
            {
	      b[++ln]=a[j++];
	    }
         if(l<=mid) 
	{
	  b[++ln]=a[i++];
	}
            else if(l>=mid)
            {
	      b[++ln]=a[j++];
	    } 
   for(i=1;i<=ln;i++)
    {
	a[l+i-1]=b[i];
    }
   }
  }
}
int main(){
  int n;
  cin>>n;
   for(int i=1; i<=n; i++)
   {                      
	cin>>a[i];
   }
   mergesort(1, n);
  for(int i=1; i<=n; i++)
  	cout<<a[i];
return 0;
}        