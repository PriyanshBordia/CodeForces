#include <iostream>
#include <math.h>

using namespace std;

void solve()
{
	int n, x; cin >> n >> x;

	int ans(0);

	if (n <= 2)
		ans = 1;
	
	else
		ans = ceil((n - 2) / (x * 1.0)) + 1;

	cout << ans << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}
