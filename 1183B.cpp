#include <iostream>
#include <algorithm>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	ll q;
	scll(q);

	while (q--)
	{
		ll n, k;
		cin >> n >> k;

		ll a[n];
		for (int i = 0; i < n; i++){ scll(a[i]); }

		sort(a, a + n);

		ll ans(0);
		if (a[n - 1] - a[0] > 2 * k)
			ans = -1;

		else 
		{
			ans = a[0] + k;
		}

		pfll(ans);
	}
	
	return 0;
}

