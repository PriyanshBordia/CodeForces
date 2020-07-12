#include <iostream>

using namespace std;

int main()
{
	int n, d;
	cin >> n >> d;

	int count = 2;

	long long int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	for (int i = 0; i < n - 1; i++)
	{
		if ((a[i] + d) == (a[i + 1] - d))
			count++;

		else if ((a[i] + d) < (a[i + 1] - d))
			count += 2;
	}

	cout << count << endl;

	return 0;
}
//abs((a[i + 1] - d) - (a[i] + d) + 1)