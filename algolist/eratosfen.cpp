#include <iostream>
#include <cstdio>

using namespace std;

int n;
bool prime[1000500];

int main() 
{
	cin >> n;
	for (int i = 2;i <= n;++i)prime[i] = true;

	prime[0] = prime[1] = false;	
	
	for (int i = 2;i <= n;++i)
		if (prime[i]&&i*1ll*i<=n)
			for (int j = i*i;j <= n;j += i)
				prime[j] = false;
}
