#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int m;
	scanf("%d", &m);

	int a[n];
	for (int i = 0; i < n; i++){ scanf("%d", &a[i]); }

	sort(a, a + n);

	int i = n - 1;
	while (m > 0)
	{	
		m -= a[i--];
	}
	
	printf("%d\n", n - i - 1);
	return 0;
}