#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int a[m];
	int b[m];
	int c[m];

	for (int i = 0; i < m; i++)
	{ 
		scanf("%d", &a[i]); 

		b[i] = a[i];
		c[i] = a[i];
	}

	sort(b, b + m);
	sort(c, c + m);

	int max = 0;
	int min = 0;

	while (n--)
	{
		max += b[m - 1];
		b[m - 1]--;

		int k = 0;

		while (c[k++] == 0);		

		min += c[--k];
		c[k]--;

		sort(b, b + m);
		sort(c, c + m);
	}

	printf("%d %d\n", max, min);

	return 0;
}