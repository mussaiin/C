#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<cmath>
#include<math.h> 
#include<vector>
using namespace std; 
double x, y, x2, y2, x3, y3, f, a, b, c, A, B, C, ans, ans1; 
int main()                              
{                                                                        
 freopen ("intersec1.in", "r", stdin); 
 freopen ("intersec1.out", "w", stdout);	
	cin >> a >> b >> c >> A >> B >> C;
	x = (c * B - C * b)/(A * b - a * B); 
	y = (a * C - c * A)/(A * b - a * B); 
	printf("%.10f %.20f", x, y); 
return 0;     
}



           