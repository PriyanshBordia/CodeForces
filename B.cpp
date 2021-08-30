#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	for (ll i = 0; i < n; i++)
	{
		if (a[i] & 1)
			cnt++;
		else
			cnt--;
	}

	if (abs(cnt) > 1)
		ans = -1;

	else 
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] & 1)
			{
				if (i - 1 >= 0 and a[i - 1] & 1 and i + 1 < n and a[i + 1] & 1)
				{
					int j =  i + 1;
					while (j < n and a[j] & 1)
						j++;

					if (j < n)
					{
						ans += (j - i);
						swap(a[i], a[j]);
					}

					else
					{
						cout << "-1" << endl;
						return;
					}
				}

				else if (i - 1 >= 0 and a[i - 1] & 1 and i + 1 < n)
				{
					swap(a[i], a[i + 1]);
					ans++;
				}

			}
			
			else
			{
				if (i - 1 >= 0 and a[i - 1] % 2 == 0 and i + 1 < n and a[i + 1] % 2 == 0)
				{
					int j = i + 1;
					while (j < n and a[j] % 2 == 0)
						j++;

					if (j < n)
					{
						ans += (j - i);
						swap(a[i], a[j]);
					}

					else
					{
						cout << "-1" << endl;
						return;
					}
				}

				else if (i - 1 >= 0 and a[i - 1] % 2 == 0 and i + 1 < n)
				{
					swap(a[i], a[i + 1]);
					ans++;
				}
			}
			// cout << i << " " << ans << endl;

		}

		for (int i = n - 1; i >= 0; i--)
		{
			if (a[i] & 1)
			{
				if (i - 1 >= 0 and a[i - 1] & 1 and i + 1 < n and a[i + 1] & 1)
				{
					int j =  i  - 1;
					while (j >= 0 and a[j] & 1)
						j--;

					if (j >= 0)
					{
						cnt += abs(j - i);
						swap(a[i], a[j]);
					}

					else
					{
						cout << "-1" << endl;
						return;
					}
				}

				else if (i + 1 < n and a[i + 1] & 1 and i - 1 >= 0)
				{
					swap(a[i], a[i - 1]);
					cnt++;
				}
			}
			
			else
			{
				if (i - 1 >= 0 and a[i - 1] % 2 == 0 and i + 1 < n and a[i + 1] % 2 == 0)
				{
					int j = i - 1;
					while (j >= 0 and a[j] % 2 == 0)
						j--;

					if (j >= 0)
					{
						cnt += (j - i);
						swap(a[i], a[j]);
					}

					else
					{
						cout << "-1" << endl;
						return;
					}
				}

				else if (i + 1 < n and a[i + 1] % 2 == 0 and i - 1 >= 0)
				{
					swap(a[i], a[i - 1]);
					cnt++;
				}
			}
		}
	}
	
	if (ans == 0)
		ans = cnt;
	else if (cnt == 0);

	else
		ans = min(ans, cnt);

	pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
} 