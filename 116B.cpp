#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	char arr[n][m];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &arr[i]);
	}

	int ans = 0;
	for (int i = 0 ; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 'W')
			{
				if (i + 1 < n && arr[i + 1][j] == 'P')
				{
					arr[i + 1][j] == '.';
					ans++;
				}

				else if (i - 1 >= 0 && arr[i - 1][j] == 'P')
				{
					arr[i - 1][j] == '.';
					ans++;
				}

				else if (j + 1 < m && arr[i][j + 1] == 'P')
				{
					arr[i][j + 1] == '.';
					ans++;
				}

				else if (j - 1 >= 0 && arr[i][j - 1] == 'P')
				{
					arr[i][j - 1] == '.';
					ans++;
				}
			}
		}
	}

	printf("%d\n", ans);

	return 0;
}