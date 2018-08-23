#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int a[300005];
int kmp( string s )
{
	int n=s.length();
	for(int i=1; i<=n; i++)
	{
		int j=a[i-1];
		while(j>0 && s[i]!=s[j]){
		j=a[j-1];
		}
	if(s[i]==s[j])
		j++;
	a[i]=j;

}
}
int main()
{
freopen ("basis.in","r",stdin);
freopen ("basis.out","w",stdout); 
 string s;
 	a[0]=0;
 int ans=1;
 bool d=false;
 cin>>s;
 kmp(s);
 cout<<s.size()-a[s.size()-1];
return 0;     
}
