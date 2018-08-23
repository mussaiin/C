#include <iostream>
#include <ctime>
#include <cstdio>
#include <conio.h>
#include <string>
using namespace std;
int main ()
{
int l=1;
string s;
l:;
 system ("cls");
 cout<<"Fifa";         
   if(l==1)cout<<"<--";
   cout<<endl;
 cout<<"Counter - Strike";
 if(l==2)cout<<"<--";
   cout<<endl;
   char x=getch();
   if (x=='s'&&l!=2)l=2;
   if (x=='w'&&l!=1)l=1;             
  if (x=='d'){
  cout<<"Vvedite parol'";
  cin>>s;                                                  
     if (s=="123"){
    if (l==1) system("\"C:\\Games\\R.G. Catalyst\\FIFA 13\\game\\fifa13.exe \"");
    else  system("\"C:\\Users\\Nurlybek\\Desktop\\Valve\\hl.exe \""); 
       }
  }
  goto l;
}
