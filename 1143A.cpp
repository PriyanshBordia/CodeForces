#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int left = 0, right = 0;

	int a[n];
	for (int i = 0; i < n; ++i){ cin >> a[i]; }

	int k = 0;
	int flag = 0;

	for (int j = n - 1; j >= 0; j--)
	{
		k = j + 1;

		if (a[j] == 0)
		{
			if (left == 0)
				left = j + 1;

			if (right != 0)
				break;
		}

		else
		{
			if (right == 0)
				right = j + 1;

			if (left != 0)
				break;
		}
	}

	cout << k << endl;

	return 0;
}