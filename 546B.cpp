#include <iostream>
#include <algorithm>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	int n;
	sc(n);

	int coins = 0;

	int a[2 * n] = { 0 };

	for (int i = 1; i <= n; i++)
	{
		int x;
		sc(x)

		a[x]++;
	}

	
	for (int i = 1; i < 2 * n; i++)
	{
		if (a[i] > 1)
		{
			a[i + 1] += a[i] - 1;
			coins += a[i] - 1;
		}
	}

	pf(coins)

	return 0;
}