#include <iostream>

#define sc(x) scanf("%d", &x);

using namespace std;

int main()
{
	int n, m, k;
	sc(n)
	sc(m)
	sc(k)

	int a[n + 1];
	for (int i = 1; i <= n; i++){ sc(a[i]); }	
	
	int left = m - 1;
	int right = m + 1;

	int house = 0;

	while (left > 0 && right <= n)
	{
		if (a[left] != 0 && a[left] <= k)
		{
			house = m - left;
			break;
		}

		if (a[right] != 0 && a[right] <= k)
		{
			house = right - m;
			break;
		}

		left--;
		right++;
		// cout << left << " " << right << endl;
	}

	if (left > 0 && house == 0)
	{
		while (left > 0)
		{
			if (a[left] != 0 && a[left] <= k)
			{
				house = m - left;
				break;
			}
			left--;
			// cout << left << " " << right << endl;
		}
	}

	if (right <= n && house == 0)
	{
		while (right <= n)
		{
			if (a[right] != 0 && a[right] <= k)
			{
				house = right - m;
				break;
			}
			right++;
			// cout << left << " " << right << endl;
		}
	}

	cout << house * 10 << endl;

	return 0;
}
