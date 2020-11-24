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
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n; cin >> n;

	// ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	if (n == 1)
		cout << "1";

	else if (n == 2)
	{
		cout << "2 1"<< endl;
		return;
	}

	for (ll i = 1; i < n; i++)
	{
		cout << i + 1 << " ";
	}

	cout <<  "1 ";
	
	cout << endl;
	// string s; cin >> s;

	// for (int i = 0; i < s.size(); i++)
	// {

	// }
	
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