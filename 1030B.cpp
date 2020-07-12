#include <iostream>

using namespace std;

int main()
{
	int n, d;
	scanf("%d %d", &n, &d);

	int m;
	scanf("%d", &m);

	int X[m], Y[m];
	for (int i = 0; i < m; ++i) { scanf("%d %d", &X[i], &Y[i]); }
	
	for (int i = 0; i < m; ++i)
	{
		int x = X[i];
		int y = Y[i];

		(2 * n - d >= (x + y) && (y + x) >= d && (x - y) <= d && (y - x) <= d) ? printf("YES\n") : printf("NO\n");
	}

	return 0;
}
