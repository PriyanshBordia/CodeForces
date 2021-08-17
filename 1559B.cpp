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
	
	ll ans(0), sum(0);

	int cnt(0);
	
	ll n; cin >> n;
	
	string s; cin >> s;


	int j = 0;
	while (j < n and s[j] == '?')
		j++;

	while (j > 0 and j <= n and s[j - 1] == '?')
	{
		j--;
		s[j] = (s[j + 1] == 'R') ? 'B' : 'R';
	}

	int i = 0; 
	while (i < n)
	{
		if (s[i] == '?')
		{
			s[i] = (s[i - 1] == 'R') ? 'B' : 'R';
		}

		i++;
	}

	cout << s << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}