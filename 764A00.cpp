#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cubes[n];
	for (int i = 0; i < n; i++){ cin >> cubes[i]; }

	for (int i = 0; i < n / 2; i++)
	{
		if (i % 2 == 0)
			swap(cubes[i], cubes[n - i - 1]);
	}

	for (int k = 0; k < n; ++k)
		printf("%d ", cubes[k]);
		
	printf("\n");
	
	return 0;
}