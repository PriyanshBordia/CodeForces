#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int a[n] = { 0 }, b[n] = { 0 };

	int min = 1;
	int max = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i] >> b[i];

		if (a[i] < min)
			min = a[i];

		if (b[i] > max)
			max = b[i];

		if (a[i] > b[i - 1] && i - 1 >= 0)
		{
			cout << "NO\n";
			return 0;
		}
	}

	(min == 0 && max == m) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}