#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	ll n, k; cin >> n >> k;

	ll res[] = { k, 1, k + 1, 0};
	
	if (k == 1)
		cout << n << endl;

	else
	{
		ll ans = 1;

		while (ans < n) ans = 2 * ans + 1;

		cout << ans << endl;
	}

	return 0;
}