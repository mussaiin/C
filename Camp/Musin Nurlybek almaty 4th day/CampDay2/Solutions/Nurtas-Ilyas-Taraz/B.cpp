#include<fstream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
ifstream in("dust.in");
ofstream out("dust.out");
int i,j,n,l;
float c=0,maxm[1001],max[1001]={0},v[1001],w[1001],end[1001],a[1001],m;
in>>n>>m;
max[0]=999;

for(i=1;i<=n;i++){
in>>v[i]>>w[i];
a[i]=v[i]/w[i];
}
for(j=1;j<=n;j++){
                  
for(i=1;i<=n;i++){
                  
if(a[i]>max[j]&&a[i]<max[j-1]){max[j]=a[i];
maxm[j]=w[i];}
}
}
l=1;
for(j=1;j<=n;j++){
if(m-maxm[j]>0){m=m-maxm[j];
                c=c+maxm[j]*max[j];
                 }           
else if(m-maxm[j]==0){c=c+maxm[j]*max[j];
                      end[l]=c;
                      l++;                   }
else {c=c+(maxm[j]-m)*max[j];
     end[l]=c;
     l++;
     
}
}
out.precision(3);
out<<fixed<<end[1];
//system("pause");
return 0;
//c/in.close();
//cout.close();
}
