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
	
	string s; cin >> s;

	if (s[0] == '2')
	{
		if (s[1] == '0' && s[2] == '2' && s[3] == '0')
			yes;
		
		else if (s[1] == '0' && s[2] == '2' && s[n - 1] == '0')
			yes;

		else if (s[1] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
			yes;

		else if (s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
			yes;
		else
		no;
	}

	else if (s[n - 4] == '2' && s[n - 3] == '0' && s[n - 2] == '2' && s[n - 1] == '0')
		yes;
	
	else
		no;
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}