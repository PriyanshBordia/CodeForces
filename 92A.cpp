#include <iostream>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int ans = m;

	int i = 1;
	while (ans >= i)
	{
		ans -= i;
		i = i % n + 1;
	}

	printf("%d\n", ans);

	return 0;
}