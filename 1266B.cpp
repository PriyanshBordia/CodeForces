#include <iostream>

typedef long long ll;

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll x; cin >> x;

	ll l = x / 14;
	
	ll k = x % 14;

	(k >= 1 && k <= 6 && l >= 1) ? yes : no;
	
	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}