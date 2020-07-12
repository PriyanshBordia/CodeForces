#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll x, y, n;
		cin >> x >> y >> n;

		ll k = ((n - y) / x) * x + y;

		cout << k << endl;
	}

	return 0;
}