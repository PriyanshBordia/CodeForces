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
	vector<ll> v;	set<ll> st;		map<ll, ll> m;

	ll ans(0), cnt(0), mx(0), mn(100000000);
	

	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	ll lock[n]; for (int i = 0; i < n; i++) cin >> lock[i];
	
	for (int i = 0; i < n; i++)
	{
		if (lock[i] == 0 && a[i] > 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (lock[j] == 0)
				{
					if (a[i] > a[j])
						swap(a[i], a[j]);
				}
			}

		}
	}
	
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

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