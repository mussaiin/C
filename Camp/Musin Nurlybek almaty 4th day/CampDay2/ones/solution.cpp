#include<iostream>

using namespace std;

int main()
{
	freopen("ones.in", "r", stdin);
	freopen("ones.out", "w", stdout);
	int n;
	cin>>n;

	// Первый индекс - количество единиц на конце
	int A[3][n+1];

	A[0][1]=1;
	A[1][1]=1;
	A[2][1]=0;

	for(int i=2;i<=n;++i)
	{
		A[0][i]=A[0][i-1]+A[1][i-1]+A[2][i-1];
		A[1][i]=A[0][i-1];
		A[2][i]=A[1][i-1];
	}
	cout<<A[0][n]+A[1][n]+A[2][n]<<endl;
	return 0;
}

