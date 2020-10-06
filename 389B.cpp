#include <iostream>

#define hash '#'

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int main()
{
	int n; cin >> n;

	char arr[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	int b[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == hash)
			{
				if (i - 1 >= 0 && arr[i - 1][j] == hash && b[i - 1][j] != 2)
				{
					if (i + 1 < n && arr[i + 1][j] == hash && b[i + 1][j] != 2) 
					{
						if (j - 1 >= 0 && arr[i][j - 1] == hash && b[i][j - 1] != 2) 
						{
							if (j + 1 < n && arr[i][j + 1] == hash && b[i][j + 1] != 2)
							{
								b[i][j] = 2;
								b[i + 1][j] = 2;  b[i - 1][j] = 2;
								b[i][j + 1] = 2;  b[i][j - 1] = 2;
							}
						}
					}
				}
			}

			else
				b[i][j] = 1;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == hash && b[i][j] != 2)
			{
				no;
				return 0;
			}
		}
	}

	yes;

	return 0;
}