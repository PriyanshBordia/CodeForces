#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	int ans = -1;

	for (int i = 0; i < n - 1; ++i)
	{
		if (s[i] == 'R' && s[i + 1] == 'L')
		{
			int temp = (a[i + 1] - a[i]) / 2;

			if (temp < ans || ans == -1)
				ans = temp;
		}
	}

	cout << ans << endl;

	return 0;
}