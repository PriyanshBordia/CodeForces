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
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;

	ll n; cin >> n;

	
	ll ans(0), sum(0), cnt[n + 1], mx(0), mn(0);
	
	for (int i = 0; i <= n; i++)
		cnt[i] = 0;

	ll a[n + 1]; 
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i]; 
		cnt[a[i]]++; 
		st.insert(a[i]); 

		if (a[i] > mx)
		{
			mx = a[i];
			mn = a[i];
		}
	}

	if (st.size() == 1)
	{
		cout << "0\n";
		return;
	}

	for (ll i = 1; i <= mx; i++)
	{
		if (cnt[i] <= cnt[mn] && cnt[i] != 0)
			mn = i;
	}
	
	// cout << mn << endl;

	int flag(1);
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == mn)
		{
			if (flag == 0)
				ans++;

			flag = 1;
		}

		else
			flag = 0;

	}

	if (!flag)
		ans++;

	// cout << ans << " " << mn << endl;

	flag = 1; mn = a[1]; sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == mn)
		{
			if (flag == 0)
				sum++;

			flag = 1;
		}

		else
			flag = 0;
	}

	if (!flag)
		sum++;

	ans = min(ans, sum);


	flag = 1; mn = a[n]; sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == mn)
		{
			if (flag == 0)
				sum++;

			flag = 1;
		}

		else
			flag = 0;
	}

	if (!flag)
		sum++;

	ans = min(ans, sum);

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