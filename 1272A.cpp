#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int q; cin >> q;

	while (q--)
	{
		ll a, b, c; cin >> a >> b >> c;

		ll k (0);

		if (a == b && b == c);

		else if (a == b)
			(c > a) ? c -= 1 : c += 1;

		else if (b == c)
			(b < a) ? a -= 1 : a += 1;

		else if (a == c)
			(b > a) ? b -= 1 : b += 1;

		else if (a > b && a < c)
		{
			b -= 1;
			c += 1; 
		}

		else if (a < b && a > c)
		{
			b += 1;
			c -= 1;
		}

		else if (b < c && b > a)
		{
			a += 1;
			c -= 1;
		}

		else if (b > c && b < a)
		{
			a -= 1;
			c += 1;
		}

		else if (a < c && b > c)
		{
			a += 1;
			b -= 1;
		}

		else if (b < c && c < a)
		{
			a -= 1;
			b += 1;
		}

		cout << abs(a - b) + abs(b - c) + abs(c - a) << endl;
	}

	return 0;
}