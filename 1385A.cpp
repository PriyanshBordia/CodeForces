#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

#define yes printf("YES\n");
#define no printf("NO\n");

using namespace std;

int main()
{
	ll t(0);
	cin >> t;

	while (t--)
	{
		ll x, y, z;
		cin >> x >> y >> z;

		ll a, b, c;

		if (x == y && y == z)
		{
			yes
			a = b = c = x;
			cout << a << " " << b << " " << c << endl; 
		}

		else if ((x == y && x == min(x, z)) || (z == y && z == min(x, z)) || (x == z && x == min(x, y)))
		{
			no
		}

		
		else if (x != y && (z == x || z == y))
		{
			yes
			b = x;
			c = y;
			a = min(b, c);
			cout << a << " " << b << " " << c << endl; 
		}

		else if (y != z && (y == x || z == y))
		{
			yes
			b = z;
			a = y;
			c = min(a, b);
			cout << a << " " << b << " " << c << endl; 
		}

		else if (x != z && (z == x || z == y))
		{
			yes
			b = z;
			a = y;
			c = min(a, b);
			cout << a << " " << b << " " << c << endl; 
		}

		else 
			no
	}

	return 0;
}
