#include <iostream>

#define pf(x) printf("%d ", x);

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		int l[n], r[n];
		for (int i = 0; i < n; i++){ cin >> l[i] >> r[i]; }

		int ans[n];
		
		int wait(0);
		for (int i = 0; i < n; ++i)
		{
			if (wait < r[i])
			{
				ans[i] = l[i] + q;
				wait++;
			}

			else
				ans[i] = 0;
		}

		for (int i = 0; i < n; i++){ pf(ans[i]); }

		printf("\n");
	}

	return 0;
}