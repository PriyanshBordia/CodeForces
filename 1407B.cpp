#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>

typedef long long ll;

#define scll (x) scanf("%ll d", &x)
#define pfll (x) printf("%ll d\n", x)

using namespace std;

ll gcd(ll a, ll b)
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
	reverse(a, a + n);

	ll mx = a[0];

	cout << mx << " ";

	ll index(0); 
	for (int i = 1; i < n; i++)
	{
		ll gc = 0;
		for (int j = 1; j < n; j++)
		{
			if (a[j] != -1 && gcd(mx, a[j]) > gc)
			{
				index = j;
				gc = gcd(mx, a[j]);
			}
		}

		mx = gcd(a[index], mx);

		cout << a[index] << " ";

		a[index] = -1;
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
