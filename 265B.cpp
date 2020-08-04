#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	int n; cin >> n;

	int h[n]; for (int i = 0; i < n; i++) cin >> h[i];

	ll t(2 * n - 1), buff(0);

	for (int i = 0; i < n; i++)
	{
		t += h[i] - buff;

		if (i + 1 < n)
		{
			if (h[i + 1] >= h[i])
				buff = h[i];
			
			else
			{
				buff = h[i + 1];
				t += h[i] - buff;
			}
		}
	}

	cout << t << endl;

	return 0;
}