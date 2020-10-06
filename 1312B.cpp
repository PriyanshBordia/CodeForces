#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (j - i == a[j] - a[i])
			{
				swap(a[i], a[j]);
				i = -1;
				break;
			}
		}
	}

	for (int i = 0; i < n; i++)
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
