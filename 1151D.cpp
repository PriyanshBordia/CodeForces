#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	ll sum(0), ans(0);

	ll n; cin >> n;

	ll c[n]; 
	for (int i = 0; i < n; i++) 
	{
		ll a, b; cin >> a >> b;

		ans += n * b - a;
		c[i] = a - b;
	}

	sort (c, c + n);

	for (int i = 0; i < n; i++)
		ans += c[i] * (n - i);


	cout << ans << "\n";

	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int	t = 1; //cin >> t;

	while (t--)
		solve();

	return 0;
}