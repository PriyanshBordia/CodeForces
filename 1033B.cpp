#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int isPrime(ll x)
{
	if (x == 2)
		return 1;

	else if (x % 2 == 0 || x == 1)
		return 0;

	else
	{
		for (int i = 3; i <= sqrt(x); i += 2)
		{
			if (x % i == 0)
				return 0;
		}

		return 1;
	}
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll a;
		ll b;
		scanf("%lld %lld", &a, &b);

		ll l = (a + b);

		(isPrime(l) == 1 && (a - b) == 1) ? printf("YES\n") : printf("NO\n"); 
	}

	return 0;
}
