#include <iostream>

typedef long long ll;

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n; cin >> n;

	ll a[n], cnt(0);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		if (a[i] & 1)
			cnt++;
	}

	if ((n % 2 == 0 && cnt == n) || cnt == 0)
		no;

	else
		yes;

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();
	
	return 0;	
}