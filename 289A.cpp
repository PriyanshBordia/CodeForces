#include <iostream>
#include <algorithm>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll n, k; cin >> n >> k;

	ll l[n], r[n]; for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

	sort(l, l + n);
	sort(r, r + n);

	ll ans(0);
	for (int i = 0; i < n; i++)
	{
		ans += r[i] - l[i] + 1;
	}

	ans = (k - ans % k);

	if (ans == k)
		ans = 0;

	cout << ans << endl;

	return 0;
}
