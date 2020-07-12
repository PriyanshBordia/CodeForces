#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int d, h, v, e;
	scanf("%d %d %d %d", &d, &h, &v, &e);

	float area = (3.141592653589793 * pow(d, 2)) / 4;

	if (e > (v / area))
		printf("NO\n");

	else
	{
		double time = (h / ((v * pow(area, -1)) - e));

		printf("YES\n");
		printf("%.12f\n", time);
	}

	return 0;
}