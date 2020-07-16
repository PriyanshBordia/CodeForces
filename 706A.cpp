#include <iostream>
#include <math.h>

typedef long double ld;

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int n;
	cin >> n;

	ld time = LONG_MAX;

	int x[n], y[n], v[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i] >> y[i] >> v[i];

		ld distance = sqrt(pow(y[i] - b, 2) + pow(x[i] - a, 2));

		time = min(time, distance / v[i]);
	}

	printf("%.18Lf\n", time);

	return 0;
}