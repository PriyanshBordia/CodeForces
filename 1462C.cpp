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

	if (n < 10)
		pfll(n);

	else
	{
		string t = "";
		int i = 9, temp = n;
		while (i > 0 && (temp - i) > 0)
		{
			temp -= i;
			t = char(i + '0') + t;
			i--;
		}

		t = char(temp + '0') + t; 

		(i > 0) ? cout << t << endl : cout << "-1\n";
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