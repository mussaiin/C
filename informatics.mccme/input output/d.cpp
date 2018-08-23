#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int v, t, ans; 
	int s;
	cin>>v>>t;
	s=v*t;
	if(v<0){cout<<109+(s%109);}
	else{cout<<s%109;}
	return 0;
}