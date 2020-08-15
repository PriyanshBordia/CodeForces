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

	int cnt(0);
	if (w % 2 == 0) cnt++;
	if (r % 2 == 0) cnt++;
	if (g % 2 == 0) cnt++;
	if (b % 2 == 0) cnt++;

	if (cnt >= 3)
		yes;

	else if (r > 0 && g > 0 && b > 0)
	{
		w += 3; r--; g--; b--;
		
		cnt = 0;
		if (w % 2 == 0) cnt++;
		if (r % 2 == 0) cnt++;
		if (g % 2 == 0) cnt++;
		if (b % 2 == 0) cnt++;

		(cnt >= 3) ? yes : no;
	}

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
