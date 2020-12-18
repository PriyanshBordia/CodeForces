#include <iostream>
#include <math.h>

using namespace std;

void solve()
{
	int ans(0);

	int n, k; cin >> n >> k;

	int x[n], y[n];
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];

	for (int i = 0; i < n; ++i)
	{
		int flag = 0;
		for (int j = 0; j < n; ++j)
		{
			if (i != j)
			{
				int dist = (abs(x[i] - x[j]) + abs(y[i] - y[j]));

				if (dist > k)
				{
					flag = 1;
				}
			}
		}

		if (!flag)
		{
			cout << "1\n";
			return;
		}
	}

	cout << "-1" << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}