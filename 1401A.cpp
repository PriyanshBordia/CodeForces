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
	int n, k; cin >> n >> k;
	
	int ans(2 * k);

	if (k == 0)
		ans = ((n & 1) ? 1 : 0);

	else if (n <= k)
		ans = k - n;

	else if (n > k && n % 2 == 0 && k & 1)
		ans = 1;

	else if (n > k && k % 2 == 0 && n & 1)
		ans = 1;

	else
		ans = 0;

	cout << ans << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
} 

// 2 1 -> 0
// 3 1
// 4 1
// 10 4
// 11 4