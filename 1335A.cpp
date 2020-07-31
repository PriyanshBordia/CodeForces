#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		ll n; cin >> n;

		ll ans(0);

		ans = ceil((n * 1.0) / 2) - 1;

		cout << ans << endl;
	}

	return 0;
}