#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		string s; cin >> s;

		int fist(0), end(0);

		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1')
			{
				if (fist == 0)
					fist = i + 1;

				end = i + 1;
			}
		}

		int ans(0);

		if (end == 0)
			ans = n;

		else 
		{
			ans = max(2 * end, 2 * (n - end + 1));
			ans = max(ans, 2 * (n - fist + 1));
			ans = max(ans, 2 * fist);
		}

		cout << ans << endl;
	}

	return 0;
}