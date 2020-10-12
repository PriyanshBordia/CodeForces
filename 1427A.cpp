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
	ll ans(0), cnt(0), mx(0), mn(1e09);
	
	vector<ll> neg, pos;

	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) 
	{ 
		cin >> a[i];

		ans += a[i];
		if (a[i] < 0)
		{
			neg.pb(a[i]);
		}

		else if (a[i] > 0)
		{
			pos.pb(a[i]);
		}

		else
			cnt++;

	}

	if ((ans) != 0)
	{
		yes;

		sort(pos.begin(), pos.end());
		for (int i = 0; i < pos.size(); i++)
		{
			cout << pos[i] << " ";
		}

		sort(neg.rbegin(), neg.rend());

		for (int i = 0; i < neg.size(); i++)
		{
			cout << neg[i] << " ";
		}


		for (int i = 0; i < cnt; i++)
		{
				cout << " 0";
		}

		cout << endl;

	}
	
	else
		no;
	// pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}

