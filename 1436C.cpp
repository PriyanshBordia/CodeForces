#include <iostream>
#include <cstring>
#include <math.h>
typedef unsigned long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)

using namespace std;


void solve()
{
	ll ans(1);
	
	ll n, x, pos; cin >> n >> x >> pos;

	int left = 0;
	int right = n;

	int more = n - x;
	int less = x - 1;
	
	while (left < right && more >= 0 && less >= 0)
	{
		int middle = (left + right) / 2;

		if (middle == pos)
			break;

		else if (pos < middle)
		{
			ans *= more;
			more--;

			right = middle;
		}

		else
		{
			ans *= less;
			less--;

			left = middle + 1;
		}

		ans = ans % ll(1e09 + 7);
	}


	for (int i = 2; i <= (more + less); i++)
	{
		ans *= i;
		ans = ans % ll(1e09 + 7);
	}

	pfll(ans);
	
	return;
}

int main()
{
	ll t = 1;

	while (t--)
		solve();

	return 0;
}
