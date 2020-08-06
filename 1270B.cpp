#include <iostream>
#include <math.h>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n - 1; ++i)
	{
		if (abs(a[i + 1] - a[i]) >= 2)
		{
			yes;
			cout << i + 1 << " " << i + 2 << endl;
			return;
		}
	}
	
	no;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}