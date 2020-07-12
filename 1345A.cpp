#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, m;
		cin >> n >> m;

		if (n == 1 || m == 1)
			printf("YES\n");

		else if (m == 2 && n == 2)
			printf("YES\n");

		else
			printf("NO\n");
	}

	return 0;
}