#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++){ cin >> a[i]; }

	int b[n]; for (int i = 0; i < n; i++){ cin >> b[i]; }
	
	int l(0), r(0), cnt(0), buff(0);

	for (int j = 0; j < n; ++j)
	{
		if (b[j] < a[j])
		{
			no;
			return;
		}

		else if (b[j] > a[j])
		{
			if (cnt == 0)
			{
				l = j;
				buff = b[j] - a[j];
			}
			
			else if ((b[j] - a[j]) != buff)
			{
				no;
				return;
			}

			r = j;
			cnt++;
		}
	}

	(cnt > 0) ? (((r - l + 1) == cnt) ? yes : no) : yes;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--) solve();

	return 0;
}