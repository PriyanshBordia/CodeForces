#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m; cin >> n >> m;

	int a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] != j + 1)
			{
				int temp = j + 1;
				while (temp < m)
				{
					if (a[i][temp++] == j + 1)
						break;
				}

				for (int p = i; p < n; p++)
					swap(a[p][j], a[p][temp - 1]);

				break;
			}
		}
	}

	int flag(1);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] != j + 1)
			{
				flag = 0;
				break;
			}
		}
	}

	(flag) ? printf("YES\n") : printf("NO\n"); 

	return 0;
}