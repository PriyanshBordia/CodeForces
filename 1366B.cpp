#include <iostream>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	int m, n; cin >> n >> m;

	int a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		int cnt(0);
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] != j + 1)
				cnt++;
		}

		if (cnt > 2)
		{
			no;
			return;
		}
	}

	yes;

	return 0;
}
