#include <iostream>
#include <math.h>

typedef long long ll;

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

void solve()
{
	ll l, r, m; cin >> l >> r >> m;

	ll a, b = l, c = r;
	
	a = (l & 1) ? (l + 1) : l;

	int temp = 1;
	while ((m - b + c) % a != 0 && b <= r && c >= l)
	{
		if (temp % 2 == 0)
			b += 1;
		
		else
			c -= 1;

		temp++;
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
