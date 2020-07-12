#include <iostream>
#include <assert.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	if (n == 1 || n == 2)
	{
		printf("1\n1\n");
		return 0;
	}

	else if (n == 3)
	{
		printf("2\n1 3\n");
		return 0;
	}

	else if (n == 4)
	{
		printf("4\n 3 1 4 2\n");
		return 0;
	}

	printf("%d\n", n);

	for (int i = 1; i <= n; i += 2) {printf("%d ", i);}

	for (int i = 2; i <= n; i += 2) { printf("%d ", i); }
	
	printf("\n");
	
	return 0;
}