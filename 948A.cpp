#include <iostream>

using namespace std;

int main()
{
	int R, C;
	cin >> R >> C;

	char garden[R][C];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> garden[i][j];
		}
	}

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			if (garden[i][j] == '.')
			{
				garden[i][j] = 'D';
			}

			else if (garden[i][j] == 'S')
			{
				if (i == 0 && j == 0)
				{
					if (garden[i + 1][j] == 'W' || garden[i][j + 1] == 'W')
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else if (i == 0 && j == (C - 1))
				{
					if (garden[i + 1][j] == 'W' || garden[i][j - 1] == 'W' )
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else if (i == (R - 1) && j == 0)
				{
					if (garden[i][j + 1] == 'W' || garden[i - 1][j] == 'W' )
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else if (i == (R - 1) && j == (C - 1))
				{
					if (garden[i - 1][j] == 'W' || garden[i][j - 1] == 'W' )
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else if (i == 0)
				{
					if (garden[i][j - 1] == 'W' || garden[i][j + 1] == 'W' || garden[i + 1][j] == 'W')
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else if (j == 0)
				{
					if (garden[i + 1][j] == 'W' || garden[i - 1][j] == 'W' || garden[i][j + 1] == 'W')
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else if (i == (R - 1))
				{
					if (garden[i][j - 1] == 'W' || garden[i][j + 1] == 'W' || garden[i - 1][j] == 'W')
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else if (j == (C - 1))
				{
					if (garden[i + 1][j] == 'W' || garden[i - 1][j] == 'W' || garden[i][j - 1] == 'W')
					{
						cout << "NO" << endl;
						return 0;
					}
				}

				else
				{
					if (garden[i][j - 1] == 'W' || garden[i][j + 1] == 'W' || garden[i + 1][j] == 'W' || garden[i - 1][j] == 'W')
					{
						cout << "NO" << endl;
						return 0;
					}
				}
			}
		}
	}

	cout << "YES" << endl;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			printf("%c", garden[i][j]);
		}

		cout << endl;
	}

	return 0;
}