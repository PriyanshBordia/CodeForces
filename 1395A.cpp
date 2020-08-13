#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("Yes\n")
#define no printf("No\n")

using namespace std;

void solve()
{
	ll r, g, b, w; cin >> r >> g >> b >> w;

	ll k = min(r, min(g, b));
	
	if ((k & 1 && w % 2 == 0) || (w & 1 && k % 2 == 0 && k != 0))
		w -= 3; r += 1; g += 1; b += 1;
	
	w += (3 * k);

	r = r - k;
	g = g - k;
	b = b - k;

	if ((k & 1 && w % 2 == 0) || (w & 1 && k % 2 == 0 && k != 0))
		w -= 3; r += 1; g += 1; b += 1;

	if (r % 2 == 0 && g % 2 == 0 && b % 2 == 0)
		yes;

	else if (r % 2 == 0 && g % 2 == 0 && b % 2 != 0)
		yes;

	else if (r % 2 != 0 && g % 2 == 0 && b % 2 == 0)
		yes;

	else if (r % 2 == 0 && g % 2 != 0 && b % 2 == 0)
		yes;

	else
		no;

	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
		solve();

	return 0;
}
