#include <iostream>
#include <set>

using namespace std;

int main()
{	
	int n, m;
	char color;
	
	scanf("%d %d %c", &n, &m, &color);

	char a[n][m];
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}

	set<char> buff;

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == color)
			{
				if (i + 1 < n && a[i + 1][j] != '.' && a[i + 1][j] != color && (buff.find(a[i + 1][j]) == buff.end()))
				{
					buff.insert(a[i + 1][j]);
					count++;
				}

				if (i - 1 >= 0 && a[i - 1][j] != '.' && a[i - 1][j] != color && (buff.find(a[i - 1][j]) == buff.end()))
				{
					buff.insert(a[i - 1][j]);
					count++;
				}
				
				if (j + 1 < m && a[i][j + 1] != '.' && a[i][j + 1] != color && (buff.find(a[i][j + 1]) == buff.end()))
				{
					buff.insert(a[i][j + 1]);
					count++;
				}

				if (j - 1 >= 0 && a[i][j - 1] != '.' && a[i][j - 1] != color && (buff.find(a[i][j - 1]) == buff.end()))
				{
					buff.insert(a[i][j - 1]);
					count++;
				}
			}
		}
	}
	
	cout << count << endl;

	return 0;
}
