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
	
	ll ans(0), sum(0), cnt(0), mx(0), mn(1000000000);
	
	ll n; cin >> n;

	string r; cin >> r;
	string b; cin >> b;

	// ll r[n + 1]; for (int i = 1; i <= n; i++) cin >> r[i];
	// ll b[n + 1]; for (int i = 1; i <= n; i++) cin >> b[i];


	for (ll i = 0; i < n; i++)
	{
		if (r[i] > b[i])
			sum++;
		
		else if (r[i] < b[i])
			cnt++;
		
		// else
		// 	mx++;
	}
	
	if (sum == cnt)
		cout << "EQUAL\n";
	else if (sum > cnt)
	{
		cout << "RED\n";
	}

	else{
		cout << "BLUE\n";
	}

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
