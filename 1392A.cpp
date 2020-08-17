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

using namespace std;

void solve()
{
	ll n; scll(n);
	
	set<ll> st; for (ll i = 0; i < n; i++) { ll x; cin >> x; st.insert(x); }

	if (st.size() == 1)
		cout << n << "\n";

	else
		cout << "1\n";

	// int i = 0;
	// while (i < (a.size() - 1))
	// {
	// 	if (a[i] != a[i + 1])
	// 	{
	// 		int k = a[i] + a[i + 1];

	// 		a.erase(a.begin(), a.begin() + i);
	// 		a.erase(a.begin(), a.begin() + i);
	// 		a.insert(a.begin() + i, k);

	// 		i = 0;
	// 	}

	// 	else
	// 		i++;
	// }

	// cout << a.size() << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}