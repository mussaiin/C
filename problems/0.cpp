#include<iostream>
using namespace std;
int main(){
int x,y,x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2>>x>>y;
if(x>=x1 && y<=y1 && x<=x2 && y>=y2)
cout<<"YES";
else
cout<<"NO";
return 0;
}   