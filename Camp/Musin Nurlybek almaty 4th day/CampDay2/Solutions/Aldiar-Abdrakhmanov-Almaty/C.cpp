#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    unsigned long long int ans[1001],k=0,hng[1001],r=0;
    hng[0]=0;
    int a;
    cin>>a;
    if(a==2)ans[a]=26;
    else if(a<21&&a>2)
    {
      for(int i=3;i<=a;i++)
      {
            ans[1]=0;
            ans[2]=26;
            while(k<a)
            {
                      hng[i]+=ans[i-k]*11;
                      k++;
            }
            ans[i]=ans[i-1]*11+hng[i-1];
      }
    }
    cout<<ans[a];
    system("pause");
    return 0;
}
