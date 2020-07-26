#include <iostream>

using namespace std;

int main()
{
	int n, x, y; cin >> n >> x >> y;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	for (int i = x; i < n; ++i)
	{
		int flag(1);

		for (int j = i - x; j < i && j < n; j++)
		{
			if (a[j] < a[i])
			{
				flag = 0;
				break;
			}
		}

		for (int k = i + 1; k <= i + y && k < n; k++)
		{
			if (a[k] < a[i])
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			cout << i + 1 << endl;
			return 0;
		}
	}

	cout << n <<"g" << endl;

	return 0;
}