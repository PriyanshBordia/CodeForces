#include <iostream>

using namespace std;

int main()
{
	int n, v;
	cin >> n  >> v;

	int tank = v;
	int cost = v;

	if (n <= v)
	{
		cout << n - 1 << endl;
		return 0;
	}
	for (int i = 2; i <= n; i++)
	{
		tank--;

		if (n - i > tank)
		{
			tank += 1;
			cost += i;
		}

		// cost 
	}  

	cout << cost << endl;

	return 0;
}