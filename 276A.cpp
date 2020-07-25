#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll n, k; cin >> n >> k;

	ll ans(-1e09);
	for (int i = 0; i < n; ++i)
	{
		ll f, t; cin >> f >> t;

		if (t > k)
			ans = max(ans, f - t + k);
		else
			ans = max(ans, f);
	}

	cout << ans << endl;

	return 0;
}