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

int countDivisors(ll n)
{
	if (n == 2)
		return 1;

    int cnt = 0;
    for (ll i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
 

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll a, b, k; cin >> a >> b >> k;

	cnt = countDivisors(a) + countDivisors(b);

	// cout << cnt << endl;

	if (a == 1 and b == 1)
		no;
	
	if (k == 1)
	{
		if ((a % b == 0 or b % a == 0) && a != b)
			yes;
		else
			no;
	}

	else
	{
		if (cnt >= k)
			yes;

		else
			no;
	}

	// for (ll i = 1; i <= k / 2; i++)
	// {
	// 	if ((a / i) == (b / (k - i)) || ((b / i) == (a / (k - i))))
	// 	{
	// 		yes;
	// 		return;
	// 	}
	// }
	
	// no;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}