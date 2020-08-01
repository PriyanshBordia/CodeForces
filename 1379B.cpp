#include <iostream>
#include <math.h>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

void solve()
{
	ll l, r, m, x = 0; cin >> l >> r >> m;

	ll a = l, b, c;

	while (a <= r)
	{
		x = m % a;
		b = x + l;
		c = l;

		if (x <= (r - l) && m / a > 0) break; 

		else if ((a - x) <= (r - l)) { b = l; c = l + (a - x); break; }

		a++;
	}

	cout << a << " " << b << " " << c << endl;

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}
