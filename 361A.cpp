#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>

using namespace std;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			(i == j) ? printf("%d ", k) : printf("0 ");
		}
		printf("\n");
	}
	
	return 0;
}