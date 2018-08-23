#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
long long  x, z, y, root, i, j, v, to;
char c;
void rec(int a, int b){
    if(a<1 || a>8 || b<1 || b>8)
    {
		return;
    }
    cout<<char((a-1)+'a')<<b<<endl;
}                    
int main()         
{
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);
 cin>>c>>y;
    x=c-'a'+1;
    rec(x-1,y-2);  
    rec(x-1,y+2);    
    rec(x-2,y-1);    
    rec(x-2,y+1);    
    rec(x+1,y-2);    
    rec(x+1,y+2);    
    rec(x+2,y-1);    
    rec(x+2,y+1);
return 0;
}