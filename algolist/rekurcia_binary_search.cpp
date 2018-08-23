#include<iostream>
using namespace std;
int n,m,a[100005],b[100005];
string answer(int k, int l, int r)
{
	if (l == r) 
	{
		if (a[l] == k) return "YES";
		return "NO";		
	}
	int mid = (l + r) / 2;
	if (a[mid] < k) return answer(k, mid + 1, r);
	return answer(k, l, mid);
}
int main()
{
	freopen("collect.in","r",stdin);
	freopen("collect.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];	
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{                             
		cin>>b[i];
		cout<<answer(b[i], 1, n)<<endl;
	}
	return 0;
}

