#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		int a[n];
		for (int i = 0; i < n; i++){ cin >> a[i]; }

		int even(0), odd(0);
		for (int i = 0; i < n; ++i)
		{
			if (i & 1)
			{
				if (a[i] % 2 == 0)
					even++;
			}

			else
			{
				if (a[i] & 1)
					odd++;
			}
		}

		(odd != even) ? cout << "-1\n" : cout << odd << endl;	
	}

	return 0;
}