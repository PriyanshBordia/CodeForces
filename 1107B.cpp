#include <iostream>
#include <cstring>

typedef long long ll;

using namespace std;

void solve()
{
	ll k, x; cin >> k >> x;

	cout << (k - 1) * 9 + x << endl;

	return;
}

int main()
{
	int n; cin >> n;

	while (n--)
		solve();

	return 0;
}
