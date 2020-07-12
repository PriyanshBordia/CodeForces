#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int a[n];
	for (int i = 0; i < n; i++){ scanf("%d", &a[i]); }

	int first = 0;
	int second =  1;

	for (int i = 1; i <= n; i++)
	{
		int pos = i % n;
		int left = (i - 1) % n;
		int right = (i + 1) % n;
		
		if (abs(a[left] - a[pos]) < abs(a[second] - a[first]))
		{
			first = left;
			second = pos;
		}

		if (abs(a[pos] - a[right]) < abs(a[second] - a[first]))
		{
			first = pos;
			second = right;
		}
	}

	printf("%d %d\n", first + 1, second + 1);

	return 0;
}