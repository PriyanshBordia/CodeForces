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
	
	ll n; cin >> n;

	ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	sort(a + 1, a + n + 1);

	ll alice(0), bob(0), i(0);
	while(i < n)
	{
		if (i % 2 == 0 && a[n - i] % 2 == 0)
			alice += a[n - i];
			
		else if (i & 1 && a[n - i] & 1)
			bob += a[n - i];

		i++;
	}

	if (alice > bob)
		cout << "Alice\n";

	else if (bob > alice)	
		cout << "Bob\n";
	
	else
		cout << "Tie\n";

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}