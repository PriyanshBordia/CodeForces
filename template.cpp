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
	ll ans(0), cnt(0), mx(0), mn(100000000);
	
	vector<ll> v;	set<ll> st;	map<ll, ll> m;

	ll n; cin >> n;

	ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	string s; cin >> s;

	for (int i = 0; i < s.size(); i++)
	{

	}
	
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

#define all(c) (c).begin(), (c).end()
#define sz(c) (c).size();
#define itr(i, a, b) for (ll i = a; i < b; i++)
#define itrn(i, a, b) for (ll i = a; i >= b; i--)
#define MOD 1000000007
#define pi 3.1415926536

#define scs(s) scanf("%s", &s);
#define pfs(s) printf("%s\n", s);

#define sci(x) scanf("%d", &x);
#define pfi(x) printf("%d\n", x);

#define sci(x) scanf("%d", &x);
#define pfi(x) printf("%d ", x);

#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);


#include <time.h>

	clock_t start = clock();

	clock_t end = clock();

	cout << double(end - start) / CLOCKS_PER_SEC << endl;

#include <iostream>

using namespace std;

void solve()
{

}

int main()
{

}