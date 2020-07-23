#include <iostream>
#include <algorithm>
#include <math.h>

#define sc(x) scanf("%d", &x);

using namespace std;

int main()
{
	int n, n1, n2; 
	cin >> n >> n1 >> n2;

	int a[n];
	for (int i = 0; i < n; i++){ sc(a[i]); }

	sort(a, a + n);

	float sum(0);

	if (n1 > n2)	
	{
		int temp = n1;

		int i = n - 1;
		while (n1--)
			sum += a[i--];

		sum /= n1;

		temp = n2;
		while (n2--)
			sum += a[i--];
		
		sum /= n2;
	}

	else
	{
		int temp = n2;

		int i = n - 1;
		while (tmep--)
			sum += a[i--];

		sum /= n2;

		temp = n1;
		while (tmep--)
			sum += a[i--];

		sum /= n2
	}

	cout << sum << endl;

	return 0;
}