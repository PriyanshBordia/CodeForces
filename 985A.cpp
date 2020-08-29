#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int n; cin >> n;

	n /= 2;

	int p[n]; for (int i = 0; i < n; i++) cin >> p[i];

	sort (p, p + n);

	int ans1(0), ans2(0);

	int i = 1, j = 2;
	for (int k = 0; k < n; k++)
	{
		int x = p[k];

		ans1 += abs(i - x); ans2 += abs(j - x); 

		i += 2; j += 2;
	}

	cout << min(ans1, ans2) << endl;

	return 0;
}