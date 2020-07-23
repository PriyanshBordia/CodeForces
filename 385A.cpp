#include <iostream>

using namespace std;

int main()
{
	int n, c;
	cin >> n >> c;

	int x[n];
	for (int i = 0; i < n; i++){ cin >> x[i]; }

	int m(0);

	for (int i = 0; i < n - 1; ++i)
	{
		if ((x[i] - x[i + 1]) > m)
			m = x[i] - x[i + 1];
	}

	cout << max(m - c, 0) << endl;

	return 0;
}