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
	vector<ll> v;	set<ll> st;	map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll a, b; cin >> a >> b;
	
	string s; cin >> s;

	sum = count(s.begin(), s.end(), '1');

	cout <<sum << " ";
sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
		{
			while (s[i] == '1')
			{
				sum++;
				i++;
			}

			while (s[i] == '0')
			{
				cnt++; i++;
			}

			if (cnt * (b + a) <= sum * a)
			{
				ans += cnt * (b + a);
				i -= 1; s[i] = '1';
			}

			else
				ans += sum * a;

			cnt = 0;
			sum = 0;
		}
	}
	
	sum = count(s.begin(), s.end(), '1');

	cout << sum << endl;

	ans = min(sum, ans);

	cout << s << endl;
	
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