#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

typedef unsigned long long ll;

using namespace std;

int main()
{
	int n; cin >> n;

	ll ans(0);

	vector<ll> v(n); 
	for (int i = 0; i < n; ++i) 
	{
		cin >> v[i];
		ans += v[i];
	}
		
	sort (v.rbegin(), v.rend());

	int m; cin >> m;

	ll q[m]; for (ll i = 0; i < m; ++i) cin >> q[i];

	for (ll i = 0; i < m; ++i)
		cout << ans - v[q[i] - 1] << endl;

	return 0;
}