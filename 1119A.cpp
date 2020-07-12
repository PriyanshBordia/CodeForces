#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int c[n];
	for (int i = 0; i < n; ++i) { scanf("%d", &c[i]); }

	int max = 1;

	for (int i = 0; i < n; ++i)
	{
		if (c[0] != c[n - 1 - i] || c[n - 1] != c[i])
		{
			max = n - i - 1;
			break;
		}
	}

	printf("%d\n", max);
	return 0;
}