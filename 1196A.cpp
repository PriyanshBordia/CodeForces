#include <iostream>
#include <algorithm>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int q;
	cin >> q;

	while (q--)
	{
		ll a, b, c;
		cin >> a >> b >> c;

		ll alice = 0;
		ll bob = 0;
		ll left = 0;

		if (a > b && a > c)
		{
			left += a;

			if (b > c)
			{
				alice += b;
				bob = c;
			}

			else
			{
				alice += c;
				bob = b;
			}

			left -= (alice - bob);
			bob = alice;

			alice += left / 2;	
			bob += left / 2;

			alice = min(alice, bob);
		}

		else if (b > c)
		{
			left += b;

			if (a > c)
			{
				alice += a;
				bob += c;
			}

			else
			{
				alice += c;
				bob = a;
			}

			left -= (alice - bob);
			bob = alice;

			alice += left / 2;	
			bob += left / 2;

			alice = min(alice, bob);
		}

		else
		{
			left += c;

			if (a > b)
			{
				alice += a;
				bob += b;
			}

			else
			{
				alice += b;
				bob = a;
			}

			left -= (alice - bob);
			bob = alice;
			
			alice += left / 2;	
			bob += left / 2;

			alice = min(alice, bob);
		}

		cout << alice << endl;
	}


	return 0;
}