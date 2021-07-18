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
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ll k = n - n / 4;

	vector<ll> a(n); for (int i = 0; i < n; i++) cin >> a[i];
	vector<ll> b(n); for (int i = 0; i < n; i++) cin >> b[i];

	sort (a.begin(), a.end());
	sort (b.rbegin(), b.rend());

	ll i = n - 1, sumA = 0, sumB = 0;
	cnt = k;
	while (cnt--)
	{
		sumA += a[i];
		sumB += b[n - i - 1];
		i--;
	}
	
	ans = sumB - sumA;

	i = n / 4;
	ll j = n - i - 1;
	// cout << i << " " << j << endl;

	while (ans > 0)
	{
		a.push_back(100);
		b.push_back(0);
		
		// sort (b.begin(), b.end());

		sumA += 100;
		sumB += b[++j];

		n++;

		if (n % 4 == 0)
		{
			sumA -= a[i++];
			sumB -= b[j--];
		}

		ans = sumB - sumA;

		cnt++;
	}

	// for (int i = 0; i < n; i++)
	// 	cout << a[i] << " " << b[i] << endl;

	pfll(cnt + 1);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}