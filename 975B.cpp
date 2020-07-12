#include <iostream>

using namespace std;

int main()
{
	long int arr[14];
	long int a[14];
	for (int i = 0; i < 14; i++)
	{
		cin >> a[i];
		arr[i] = a[i];
	}

	long long int tmax = 0;
	long long int ans = 0;
	
	for (int i = 0; i < 14; i++)
	{
		int buff = a[i];

		for (int u = 0; u < 14; ++u)
			arr[u] = a[u] + (buff / 14);

		arr[i] -= a[i];		

		if (buff != 0)
		{
			int k = buff % 14;
			int j = i;

			while (k--)
			{
				j = (j + 1) % 14;
				arr[j]++;
			}

			tmax = 0;
			for (int u = 0; u < 14; u++)
			{
				if (arr[u] % 2 == 0)
					tmax += arr[u];
			}

			if (tmax > ans)
			{
				ans = tmax;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
