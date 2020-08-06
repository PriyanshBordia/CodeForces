#include <iostream>
#include <algorithm>
#include <vector>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n, k1, k2; cin >> n >> k1 >> k2;

	int a[k1]; for (int i = 0; i < k1; i++) cin >> a[i];

	int b[k2]; for (int i = 0; i < k2; i++) cin >> b[i];

	sort(a, a + k1);
	sort(b, b + k2);

	(a[k1 - 1] > b[k2 - 1]) ? yes : no;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}
