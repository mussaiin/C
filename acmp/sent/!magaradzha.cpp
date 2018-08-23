#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h>
#include<vector>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int n, k, kol=0;
bool u1[15], u2[15], u3[15], u4[15];
bool u[15][15];
char ans[55][55];
int dx[]={1, 2, -1, -2, 1, 2, -1, -2};
int dy[]={2, 1, 2, 1, -2, -1, -2, -1};                                                     
bool check(int a, int b)
{
	if(a<1 && a>n && b<1 && b>n)
	{
		return 0;
	}
	else
	{
	 	return 1;
	}
}
void rec(int x, int y, int kl)
{
		if(x==n+1 && kl!=k)
		{
			return;
		}
		if(kl==k){
			kol++;
/* 			for(int i=1;i<=n;i++)
				{    	                                      
					for(int j=1;j<=n;j++)
					{
						cout<<ans[i][j];
					}
					cout<<endl;                              
				}
			cout<<endl; /* */		
			return;
		}
	if(!u4[x] && !u1[y] && !u2[x+y] && !u3[x-y+n] && !u[x][y])
	{
		{
			for (int i=0; i<8; i++)
			{
				if(check(x+dx[i],y+dy[i]))
				{
					u[x+dx[i]][y+dy[i]]=false;
				}                                                                                  
			}   
	  	}
		u4[x]=u1[y]=u2[x+y]=u3[x-y+n]=u[x][y]=1;     
//		ans[x][y]='';                               
		rec(x+1, 1, kl+1);                           
//		ans[x][y]='.';                               
		u4[x]=u1[y]=u2[x+y]=u3[x-y+n]=u[x][y]=0;	
	}
	if(y==n)
		rec(x+1, 1, kl);
	else 
		rec(x, y+1, kl);
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout); 
	cin>>n>>k;
//	for(int i=1; i<=n; i++)
//	{   	
//		for(int j=1; j<=n; j++)
//		{
//			ans[i][j]='.';
//		}
//	}
	rec(1, 1, 0);
	cout<<kol;
return 0; 
}  
