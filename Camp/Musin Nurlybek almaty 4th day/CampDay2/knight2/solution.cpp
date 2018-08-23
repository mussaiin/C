#include<iostream>

using namespace std;

int A[1000][1000];

int value(int i, int j)
{
	if(i>=1 && j>=1)
		return A[i][j];
	else
		return 0;

}

int main()
{
        freopen("knight2.in", "r", stdin);
	freopen("knight.out", "w", stdout);

	int n, m, i, j,k;
	in>>n>>m;
	A[1][1]=1;
	for(k=3;k<=n+m;++k)
	{
		if(k<=n+1)
		{
			i=k-1;
			j=1;
		}
		else
		{
			i=n;
			j=k-i;
		}
		for(;i>=1 && j<=m;--i,++j)
			A[i][j]=value(i-2,j-1)+value(i-2,j+1)+value(i-1,j-2)+value(i+1,j-2);
	}

	out<<A[n][m]<<endl;
}
