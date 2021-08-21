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

bool isPower(int x)
{
	if (x && x << 1 == 0)
		return true;

	return false;
}

int dp(string s)
{
	if (s.size() == 0)
		return 1;

	if (s.size() == 1)
	{
		if (isPower(stoi(s)))
			return 0;

		else 
			return 2;
	}

	if (isPower(stoi(s)))
		return 0;

	int cnt = INT_MAX;
	for (int i = 0; i < s.size(); i++)
	{
		string t = s;
		t.erase(t.begin());

		if (t.size() > 0 and isPower(stoi(t)))
			break;

		cnt = min(cnt, 1 + dp(t));
	}

	return cnt;
}

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	string s = to_string(n);

	if (isPower(n))
	{
		cout << ans << endl;
		return;
	}

	ans = dp(s);

	// for (int i = 0; i < s.size(); i++)
	// {
	// 	string t = s;

	// 	t.erase(t.begin() + i);

	// 	if (isPower(stoi(t)))
	// 		break;


	// }
	
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