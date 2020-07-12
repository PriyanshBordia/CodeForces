#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int even1 = 0;
	int odd1 = 0;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		(a % 2 == 0) ? even1++ : odd1++;
	}

	int even2 = 0;
	int odd2 = 0;
	
	for (int i = 0; i < m; i++)
	{
		int b;
		cin >> b;

		(b % 2 == 0) ? even2++ : odd2++;
	}

	cout << min(even1, odd2) + min(even2, odd1) << endl;

	return 0;
}