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
	
	ll n, m; cin >> n >> m;
	
	int alpha[m][26];
	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < 26; i++)
			alpha[j][i] = 0;
	}

	// vector<string> s; 
	for (int i = 0; i < n; i ++)
	{
		string s; cin >> s;
		// s.push_back(s);

		for (int j = 0; j < m; j++)
			alpha[j][s[j] - 'a']++;
	}

	// vector<string> z;
	for (int i = 0; i < n - 1; i++)
	{
		string t; cin >> t;
		// s.push_back(s);
		for (int j = 0; j < m; j++)
			alpha[j][t[j] - 'a']--;
	}

	for (int j = 0; j < m; j++)
	{
		for (int i = 0; i < 26; i++)
			if (alpha[j][i] > 0)
				cout << char(i + 'a');
	}

	cout << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}