#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n; cin >> n;

	int a[n], b[n]; 
	for (ll i = 0; i < n; i++)
	{ 
		cin >> a[i]; 
		b[i] = a[i];
	}

	sort(b , b + n);

	int mn = b[0];

	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] != b[i] && b[i] % mn != 0)
		{
			no;
			return;
		}
	}

	yes;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}