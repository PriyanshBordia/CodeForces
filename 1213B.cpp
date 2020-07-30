#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		int a[n]; for (int i = 0; i < n; ++i){ cin >> a[i]; }

		int cnt(0), min(n - 1);

		for (int i = n - 1; i >= 0; --i)
		{
			if (a[i] > a[min])
				cnt++;
			
			else
				min = i;
		}
		
		cout << cnt << endl;
	}

	return 0;
}
