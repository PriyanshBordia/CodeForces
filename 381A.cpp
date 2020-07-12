#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	int left = 0;
	int right = n - 1;

	int sereja = 0;
	int dima = 0;

	int j = 1;
	while (left <= right)
	{
		int count = 0;
		if (a[left] > a[right] )
		{
			count += a[left];
			left++;
		}

		else
		{
			count += a[right];
			right--;
		}

		(j % 2 == 1) ? sereja += count : dima += count;

		j++;
	}

	cout << sereja << " " << dima << endl;

	return 0;
}