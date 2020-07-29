#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		ll n, k; cin >> n >> k;

		if (n % 2 == 0)
		{
			n += 2 * k;
		}

		else
		{
			while (k--)
			{
				for (int i = 2; i <= n; i++)
				{
					if (n % i == 0)
					{
						n += i;
						break;
					}
				}

				if (n % 2 == 0)
				{
					n += 2 * (k);
					break;
				}
			}
		}

		cout << n << endl;
	}

	return 0;
}