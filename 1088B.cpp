#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	sort(a, a + n);

	int sum(0);
	int count(0);

	int j = 0;
	while (count < k && j < n)
	{
		a[j] -= sum;

		if (a[j] != 0)
		{
			sum += a[j];
			cout << a[j] << endl;
			count++;
		}

		j++;
	}

	while (count < k)
	{
		cout << "0\n";
		count++;
	}

	return 0;
}