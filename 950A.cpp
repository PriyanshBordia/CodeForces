#include <iostream>

using namespace std;

int main()
{
	int l, r, a;
	cin >> l >> r >> a;

	int team = 0;

	if (l < r)
	{
		team += 2 * l;
		r -= l;

		if (a > r)
		{
			team += 2 * r;
			a -= r;

			team += a;

			if (a % 2 == 1)
				team -= 1;
		}

		else 
			team += 2 * a;
	}

	else
	{
		team += 2 * r; 
		l -= r;

		if (a > l)
		{
			team += 2 * l;
			a -= l;

			team += a;

			if (a % 2 == 1)
				team -= 1;
		}

		else
			team += 2 * a;
	}


	cout << team << endl;

	return 0;
}