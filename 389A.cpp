#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	sort(a, a + n);

	while ((a[n - 1] - a[0]) > 0)
	{
		int k = n - 1;
		while (k > 0)
		{
			if ((a[k] - a[k - 1]) > 0)
				a[k] -= a[k - 1];
			k--;
		}

		sort(a, a + n);		 
	}

	cout << accumulate(a, a + n, 0) << endl;

	return 0;
}
