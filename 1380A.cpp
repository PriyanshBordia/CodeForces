#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n; cin >> n;
	
	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	int ind(1), i(-1), j(-1), k(-1);

	while (ind < n && a[ind] <= a[ind - 1]) ind++;

 	i = ind - 1;

	while (ind < n && a[ind] >= a[ind - 1]) ind++;

 	j = ind - 1;
	k = ind;

	// cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;

	if (i >= 0 && k < n)
	{
		yes;
		cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
		return;
	}

	no;

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