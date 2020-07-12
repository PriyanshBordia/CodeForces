#include <iostream>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int robocoder[n];
	for (int i = 0; i < n; i++){ scanf("%d", &robocoder[i]); }

	int bionicsolver[n];
	for (int i = 0; i < n; i++){ scanf("%d", &bionicsolver[i]); }

	int x = 0;
	int y = 0;
	int z = 0;
	for (int i = 0; i < n; i++)
	{
		if (robocoder[i] == 1 && bionicsolver[i] == 0)
		{
			y++;
		}

		else if (robocoder[i] == 0 && bionicsolver[i] == 1)
		{
			x++;
		}

		else
		{
			y++;
			z++;
		}
	}

	if ((z == n) || (y == 0 && x == 0) || (y == z))
		cout << "-1" << endl;

	else
	{
		int ans = x / (y - z) + 1;
		cout << ans << endl;
	}

	return 0;
}