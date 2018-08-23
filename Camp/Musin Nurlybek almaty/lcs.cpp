#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string lcs(string a, string b)
{
vector<vector<int> > max_len;
max_len.resize(a.size() + 1);
for(int i = 0; i <= static_cast<int>(a.size()); i++)
max_len[i].resize(b.size() + 1);
for(int i = static_cast<int>(a.size()) - 1; i >= 0; i--)
{
for(int j = static_cast<int>(b.size()) - 1; j >= 0; j--)
{
if(a[i] == b[j])
{
max_len[i][j] = 1 + max_len[i+1][j+1];
}
else
{
max_len[i][j] = max(max_len[i+1][j], max_len[i][j+1]);
}
}
}
string res;
for(int i = 0, j = 0; max_len[i][j] != 0 && i < static_cast<int>(a.size()) && j < static_cast<int>(b.size()); )
{
if(a[i] == b[j])
{
res.push_back(a[i]);
i++;
j++;
}
else
{
if(max_len[i][j] == max_len[i+1][j])
i++;
else
j++;
}
}
return res;
}
int main()
{
long long n,m,a[444444],b[444444],c,ans=0;
 cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
 cin>>m;
	for(int j=1; j<=m; j++)
	{
		cin>>b[j];
	}
	cout<<lcs();
}     