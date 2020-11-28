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

	cout << n << endl;

	for (int i = 1; i <= n; i++)
		cout << i << " ";

	cout << endl;

// 1 2 3
// 2 3 3
// 4 5 3
// 7 8 3
// 7 12 7
// 12 12 12

// 1 2 3 4
// 2 3 4 4
// 4 5 6 4
// 7 8 9 4
// 7 12 13 8
// 12 12 18 13
// 18 18 18 18

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
