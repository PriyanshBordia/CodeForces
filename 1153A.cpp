#include <iostream>

using namespace std;

int main()
{
	int n, t; cin >> n >> t;

	int mn(1e06), ans(0);
	for (int i = 1; i <= n; ++i)
	{
		int s, d; cin >> s >> d;

		while (s < t)
			s += d;

		if (s < mn)
		{
			mn = s;
			ans = i;
		}
	}

	cout << ans << endl;

	return 0;
}	