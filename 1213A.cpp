#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n; cin >> n;

	int cnt(0);
	int x[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];

		if (x[i] & 1)
			cnt++;
	}

	cout << min(cnt, n - cnt) << endl;

	return 0;
}