#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll n;
		cin >> n;

		ll steps = 0;

		if (n == 1)
		{
			cout << steps << endl;
		}

		else if (n % 3 != 0)
		{
			cout << "-1" << endl;
		}

		else
		{
			bool flag = false;
			while (n != 1 && n < pow(n, 2))
			{
				if (n % 6 == 0)
				{
					n = n / 6;	
					steps++;
				}

				else
				{
					n *= 2;
					steps++;
				}
			}

			if (n == 1)
				flag = true;

			(flag) ? cout << steps << endl : cout << "-1" << endl;
		}
	}

	return 0;
}