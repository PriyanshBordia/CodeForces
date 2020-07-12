#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int notSleep = 0;

	while (n--)
	{
		for (int i = 1; i <= 2 * m; i += 2)
		{
			int a, b;
			cin >> a >> b;
			
			if (a == 1 || b == 1)
				notSleep++;
		}
	}

	cout << notSleep << endl;

	return 0;
}