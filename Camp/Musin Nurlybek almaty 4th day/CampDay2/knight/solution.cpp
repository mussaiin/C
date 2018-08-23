#include<iostream>

using namespace std;

int main()
{
	int n, m, i, j;
	cin>>n>>m;
	int A[1000][1000];
	for(i=0;i<=n;++i)
	{
		A[i][0]=0;
		A[i][1]=0;
	}
	for(j=0;j<=m;++j)
	{
		A[0][j]=0;
		A[1][j]=0;
	}
	A[1][1]=1;
	for(i=2;i<=n;++i)
		for(j=2;j<=m;++j)
			A[i][j]=A[i-1][j-2]+A[i-2][j-1];
	cout<<A[n][m]<<endl;

}
