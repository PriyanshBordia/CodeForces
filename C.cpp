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
	
	ll ans(0), sum(0), cntA[27], cntB[27], mx(-1), mn(1000000000);
	
	ll n, k; cin >> n >> k;

	string a; cin >> a;
	string b; cin >> b;

	sort(a, a + n);
	sort(b, b + n);

	for (int i = 0; i < n; i++)
	{
		cntA[int(a[i] - 'a')]++;
		cntB[int(b[i] - 'a')]++;

		if (a[i] < )
	}

	sort(cntA, cntA + 27);
	sort(cntB, cntB + 27);
	
	for (int i = 0)
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