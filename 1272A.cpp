#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

int main()
{
	int q; cin >> q;

	while (q--)
	{
		ll a, b, c; cin >> a >> b >> c;
		
		ll ans(abs(a - b) + abs(b - c) + abs(a - c));
		for (int i = -1; i <= 1; i++)
		{
			for (int j = -1; j <= 1; j++)
			{
				for (int k = -1; k <= 1; k++)
				{
					ans = min(ans, abs(a - b + i - j) + abs(b - c + j - k) + abs(a - c + i - k));
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}