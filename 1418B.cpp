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
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> unlocked;

	ll ans(0), cnt(0), mx(0), mn(100000000);
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	ll lock[n]; 
	for (int i = 0; i < n; i++) 
	{
		cin >> lock[i];

		if (!lock[i])
			unlocked.pb(a[i]);
	}

	sort(unlocked.rbegin(), unlocked.rend());
	
	int j(0);
	for (int i = 0; i < n; i++)
	{
		if (lock[i] == 0)
			a[i] = unlocked[j++];

		cout << a[i] << " ";
	}
	
	cout << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}