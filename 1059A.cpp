#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll n, L, a; cin >> n >> L >> a;

	ll t[n], l[n];
	for (int i = 0; i < n; i++){ cin >> t[i] >> l[i]; }

	ll ans(0);
	ll prev(0);

	for (int i = 0; i < n; ++i)
	{
		ans += ((t[i] - prev) / a);
		prev = t[i] + l[i];
	}

	ans += (L - prev) / a;

	cout << ans << endl;

	return 0;
}
