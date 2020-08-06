#include <iostream>
#include <algorithm>

typedef long long ll;

#define sc(x) scanf("%d", &x)
#define pf(x) printf("%d\n", x)

using namespace std;

void solve()
{
	int n; sc(n);
		
	int cnt[n + 1]; 

	for (int i = 0; i <= n; ++i) cnt[i] = 0;

	for (int i = 0; i < n; i++) { int x; cin >> x; ++cnt[x]; }

	int ans(0);
	for (int s = 2; s <= 2 * n; s++)
	{
		int cur(0);

		for (int i = 1; i < (s + 1) / 2; ++i)
		{			
			if ((s - i) <= n)
				cur += min(cnt[i], cnt[s - i]);
		}

		if (s % 2 == 0)
			cur += cnt[s / 2] / 2;

		ans = max(ans, cur);
	}

	cout << ans << endl;

	return;
}

int main()
{
	int t; sc(t);
	
	while (t--)
		solve();

	return 0;
}
