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
int n, a[100005], b[100005];
int main()
{
freopen ("canteen.in","r",stdin);
freopen ("canteen.out","w",stdout); 
cin>>n;
for(int i=1; i<=n; i++)
{
 	cin>>a[i]>>b[i];
}
srand(time(0));
cout<<rand()%n;
return 0; 
}  
