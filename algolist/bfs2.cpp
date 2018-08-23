#include<iostream>
#include<fstream>
using namespace std;
int q[1005],r=-1,n,a[105][105],v,k,now,l,kol[1009];
bool used[1005];
void push(int b)
{    
    q[++r]=b;
}
int top()
{
    return q[l];
}
void pop()
{
    l++;
}
int main()
{
freopen("bfs.in","r",stdin);
freopen("bfs.out","w",stdout);
    cin>>n>>v>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    push(v);
    kol[v]=0;
    used[v]=true;
    while(r-l>=0)
    {
        now=top();
        pop();
        if(now==k)
        {
            cout<<kol[now];
            return 0;
        }
        for(int i=1;i<=n;i++)
        {
            if(a[now][i] && !used[i])
            {
                kol[i]=kol[now]+1;
                used[i]=true;
                push(i);
            }
        }
    }
    cout<<"0";
    return 0;
}
            