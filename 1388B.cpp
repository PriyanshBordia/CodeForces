#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n; scll(n);
	
	int g = ceil((n * 1.0) / 4);

	for (int i = 1; i <= n - g; i++)
		cout << "9";

	while (g--)
		cout << "8";

	cout << endl;
		
	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
	{
		solve();
	}	

	return 0;
}