#include <iostream>

using namespace std;

int main()
{
	int n, t, c;
	scanf("%d %d %d", &n, &t, &c);

	int count = 0;
	int L = 0;

	int crime[n];
	for (int i = 0; i < n; i++) { cin >> crime[i]; } 

	for (int i = 0; i < n; i++)
	{
		if (crime[i] <= t)
			L++;

		else
		{
			count += max(L - c + 1, 0);
			L = 0;	
		}
	}

	count += max(L - c + 1, 0);

	cout << count << endl;

	return 0;
}