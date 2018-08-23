#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[1005],i;
	cin>>n;
	for(i=1;i <=n; i++) cin>>a[i];
	sort(a+1,a+n+1);  //or sort(&a[1], &a[n+1]);
	for(i=1; i<=n; i++) cout<<a[i]<<" ";
	return 0;
}





















