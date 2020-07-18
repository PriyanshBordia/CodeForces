#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = 0;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

		if (a[i] == i)
			count++;
	}

	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != i && a[a[i]] == i)
		{
			flag = 1;
			count += 2;
			break;
		}

		if (!flag && i == n - 1 && count != n)
			count++;
	}

	cout << count << endl;

	return 0;
}