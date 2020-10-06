#include <iostream>
#include <math.h>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n, m; cin >> n >> m;

	int flag(0);
	while (n--)
	{
		int a[2][2];
		cin >> a[0][0] >> a[0][1];
		cin >> a[1][0] >> a[1][1];

		if (a[0][1] == a[1][0]) 
			flag++;
	}

	(flag >= 1 && m % 2 == 0) ? yes : no;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}
