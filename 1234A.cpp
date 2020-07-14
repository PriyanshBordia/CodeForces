#include <iostream>
#include <vector>
#include <numeric>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int q;
	cin >> q;

	while (q--)
	{
		int n;
		cin >> n;

		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];

		int sum = accumulate(v.begin(), v.end(), 0);

		int ans = (sum / n) - 1;

		while ((ans * n) < sum)
			ans += 1;

		cout << ans << endl;
	}

	return 0;
}
