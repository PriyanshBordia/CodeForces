#include <iostream>
#include <math.h>
#include <algorithm>

typedef long long ll;

using namespace std;

int main()
{
	ll a, b, x, y;
	scanf("%lld %lld %lld %lld", &a, &b, &x, &y);

	ll t = __gcd(x, y);

	x /= t;
	y /= t;

	ll ans = min((a / x), (b / y));

	cout << ans << endl;

	return 0;
}
