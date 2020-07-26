#include <iostream>
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;

	int x[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];
	}

	int ans(0);

	for (int i = 1; i <= 5; i++)
	{
		if ((accumulate(x, x + n, 0) + i) % (n + 1) != 1)
			ans++;
	}
		
	cout << ans << endl;

	return 0;
}