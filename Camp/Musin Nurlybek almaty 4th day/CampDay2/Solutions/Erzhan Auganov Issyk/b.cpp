#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
#define mp make_pair
long long n,w,x,y;
pair<double , double > t[1111];
double sum;
int main (){
freopen("dust.in" , "r"  , stdin);
freopen("dust.out" , "w" , stdout);
cin>>n>>w;
for(int i = 1; i <= n; i ++){
cin>>x>>y;
t[i]=mp(x/y,y);
}
sort(t +1 , t+ n + 1);
reverse(t + 1 , t + n + 1);
int W=0;
for(int i = 1; i <= n; i ++){
if(W+t[i].second > w){
sum+=(w-W)*t[i].first;
break;
}
else {
sum=(t[i].first*t[i].second)+sum;
W+=t[i].second;
}
}
printf("%.3f" , sum);
return 0;
}
