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
	ll n, k; cin >> n >> k;

	ll a[n]; 
	ll z(0);
	for (ll i = 0; i < n; i++) 
	{
		cin >> a[i];

		z = max(a[i], z);
	}


	z = *max_element(a, a + n);

	for (int i = 0; i < n; i++)
	{
		a[i] = z - a[i];
	}

	
	if (k % 2 == 0 && k > 1)
	{
		z = *max_element(a, a + n);
	
		for (int i = 0; i < n; i++)
		{
			a[i] = z - a[i];
		}

	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	cout << endl;
	
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}