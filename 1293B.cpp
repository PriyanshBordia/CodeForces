#include <iostream>

using namespace std;

int main()
{
	double n; cin >> n;

	double ans(0);
	for (int i = 1; i <= n; ++i)
		ans += 1.0 / i;

	printf("%.12f\n", ans);

	return 0;
}