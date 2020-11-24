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
	
	ll ans(0), sum(0), cnt[1000001], mx(0), mn(0);
	
	for (ll i = 1; i < 100000; i++)
		cnt[i] = 0;

	ll n; cin >> n;

	ll a[n + 1]; 

	for (int i = 1; i <= n; i++) 
	{ 
		cin >> a[i]; 
		
		cnt[a[i]]++; 

		st.insert(a[i]); 

		if (a[i] > mx)
			mx = a[i];
	} 

	if (n == 1)
	{
		cout << "1\n";
		return;
	}

	else if (st.size() == 1)
	{
		cout << "-1\n";
		return;
	}

	else
	{
		for (int i = 1; i <= mx; i++)
		{
			if (cnt[i] == 1)
			{
				ans = i;
				break;
			}
		}

		for (int i = 1; i <= n; i++)
		{
			if (a[i] == ans)
			{
				cout << i << endl;
				return;
			}
		}

		cout << "-1\n";
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}