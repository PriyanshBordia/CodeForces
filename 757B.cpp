#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;

	int cnt[100001] = { 0 };

	int ans(1); 
	while (n--) 
	{
		int x; cin >> x;

		for (int k = 2; k <= sqrt(x); k++)
		{
			if (x % k == 0)
				cnt[k]++;

			while (x % k == 0)
				x /= k;
		}

		if (x > 1)
			cnt[x]++;
	}

	ans = max(ans, *max_element(cnt, cnt + 100001));

	cout << ans << endl;

	return 0;
}