#include <iostream>

#define pf(x) printf("%d ", x);

using namespace std;

void solve()
{
	int n; cin >> n;

	int l[n], r[n];
	for (int i = 0; i < n; i++){ cin >> l[i] >> r[i]; }

	int ans[n];
	
	int wait(0);
	for (int i = 0; i < n; ++i)
	{
		if (wait < r[i])
		{
			ans[i] = max(l[i], wait + 1);
			wait = ans[i];
		}

		else
			ans[i] = 0;
	}

	for (int i = 0; i < n; i++){ pf(ans[i]); }

	printf("\n");

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}