#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		long int n;
		cin >> n;

		(n % 4 == 0) ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}