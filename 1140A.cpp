#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int a[n + 1]; for (int i = 1; i <= n; i++){ cin >> a[i]; }

	int i(1), cnt(0);
	while (i <= n)
	{
		cnt++;

		int mx = i;
		while (i <= n && i <= mx)
		{
			mx = max(a[i], mx);
			i++;
		}
	}
	
	cout << cnt << endl;

	return 0;
}