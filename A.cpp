#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>

typedef long long ll;

using namespace std;

int main()
{
	ll t; cin >>t;

	while (t--)
	{
		ll l, r; cin >> l >> r;

		(2 * l <= r) ? cout << l << " " << 2 * l << endl : cout << "-1 -1\n";
	}

	return 0;
}