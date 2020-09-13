#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>

typedef long long ll;

#define scll (x) scanf("%ll d", &x)
#define pfll (x) printf("%ll d\n", x)

using namespace std;

ll  gcd(ll  a, ll  b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

void solve()
{	
	ll n; cin >> n; 
	
	ll a[n]; for (ll i = 0; i < n; i++) { cin >> a[i]; }

	sort(a, a + n);

	ll i = n - 1; 
	while (i >= 0)
	{
		ll k = i, z = a[i];
		while (k >= 0)
		{			
			if (a[k] != -1 && ((z % a[k] == 0) || gcd(z, a[k]) > 1) )
			{
				cout << a[k] << " ";
				a[k] = -1;
			}

			k--;
		}

		i--;
	}
	
	cout << endl;

	return;
}

int main()
{
	ll t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}
