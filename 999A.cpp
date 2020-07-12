#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	int count = 0;
	int left = 0;
	int right = n - 1;

	while ((a[left] <= k || a[right] <= k) && (left < right))
	{
		if (a[left] <= k)
		{
			count++;
			left++;
		}

		if (a[right] <= k)
		{
			count++;
			right--;
		}
	}

	if (left == right && a[left] <= k)
		count++;

	cout << count << endl;
	return 0;
}