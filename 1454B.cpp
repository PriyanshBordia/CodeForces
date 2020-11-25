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

int checkPos(int b[], int x, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (b[i] == x)
		{
			return (i + 1);
		}
	}

	return -1;
}

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(-1);

	int n; cin >> n;

	int a[n], b[n]; for (int i = 0; i < n; i++){ cin >> a[i]; b[i] = a[i]; st.insert(a[i]); }

	if (n == 1)
		ans = 1;

	else if (st.size() != 1)
	{
		sort (a, a + n);

		for (int i = 0; i < n; i++)
		{
			if ((i - 1 >= 0 && a[i] != a[i - 1]) && (i + 1 < n && a[i] != a[i + 1]))
			{
				ans = checkPos(b, a[i], n);
				break;
			}

			else if (i == n - 1 && a[i] != a[i - 1])
			{
				ans = checkPos(b, a[i], n);
				break;
			}

			else if (i == 0 && a[i] != a[i + 1])
			{
				ans = checkPos(b, a[i], n);
				break;
			}
		}
	}

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