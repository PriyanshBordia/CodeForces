#include <iostream>

using namespace std;

void solve()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	int b[n]; for (int i = 0; i < n; i++) cin >> b[i];

	int c[n]; for (int i = 0; i < n; i++) cin >> c[i];

	int k(1);	
	while (k < n)
	{
		if (a[k] == a[k - 1])
		{
			if (b[k] != a[k - 1])
			a[k] = b[k];

			else if (a[k - 1] != c[k]) a[k] = c[k];
		}

		if (k == n - 1 && a[n - 1] == a[0])
		{
			a[n - 1] = (b[n - 1] != a[0] && b[n - 1] != a[n - 2]) ? b[n - 1] : c[n - 1];
		}

		k++;
	}

	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";

	cout << endl;

	return;
}

int main()
{
	int t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}