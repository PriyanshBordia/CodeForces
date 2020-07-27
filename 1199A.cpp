#include <iostream>

using namespace std;

int main()
{
	int n, x, y; cin >> n >> x >> y;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	for (int i = 0; i < n; ++i)
	{
		int flag(1);

		int j = i - x; 
		while (j < i && j >= 0)
		{
			if (a[j] < a[i])
			{
				flag = 0;
				break;
			}
			j++;
		}

		int k = i + 1;
		while (k <= i + y && k < n)
		{
			if (a[k] < a[i])
			{
				flag = 0;
				break;
			}
			k++;
		}

		if (flag)
		{
			cout << i + 1 << endl;
			return 0;
		}
	}

	// cout << n << endl;

	return 0;
}