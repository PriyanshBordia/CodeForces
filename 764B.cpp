#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cubes[n + 1];
	for (int i = 1; i <= n; i++){ cin >> cubes[i]; }

	for (int i = 1; i <= (n - i + 1); i++)
	{
		for (int j = i; j <= ((n - i + 1) / 2) + 1; j++)
			swap(cubes[j], cubes[n + 1 - j]);
	}

	for (int k = 1; k <= n; ++k)
		printf("%d ", cubes[k]);
		
	printf("\n");

	return 0;
}