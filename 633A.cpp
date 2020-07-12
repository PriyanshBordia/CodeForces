#include <iostream>
#include <algorithm>
#include <math.h>

typedef long long ll;

#define scll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	ll a, b, c;
	scll(a, b, c)

	if (c % __gcd(a, b) != 0)
	{
		printf("NO\n");
		return 0;
	}

	int i = 0;
	while ((a * i) <= c)
	{
		if (((c - (a * i)) % b) == 0)
		{
			printf("YES\n");
			return 0;
		}

		i++;
	}

	printf("NO\n");

	return 0;
}
