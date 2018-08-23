#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <vector>
#include <map>
#define pb push_back
#define pob pop_back
#define ll long long
#define mp make_pair
#define sz size()
#define ull unsigned long long  
using namespace std;
int n,i;
string s;
bool used[10];
map < string  , bool > m ;
                                                          
void rec(int place,string now){                                      
 	if(place==n){                                                        
		if(!m[now]){
			cout<<now<<endl;                                                     
			m[now]=1;
		}
		return ;                                        
 	}
 	for(int i=0;i<n;i++){
 		if(!used[i]){
 			used[i] = 1;
 			rec(place+1,now+s[i]);
 			used[i] = 0;
 		}
 	}
}

int main(){
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout); 
	cin >> s ;
	n = s.length();
	sort(s.begin(),s.end());
	rec(0,"");
	return 0; 
}