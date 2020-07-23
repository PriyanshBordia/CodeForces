#include <iostream>
#include <algorithm>
#include <math.h>

typedef long long ll;

#define sc(x) scanf("%d", &x);

using namespace std;

int main()
{
	ll n, n1, n2; 
	cin >> n >> n1 >> n2;

	int a[n];
	for (int i = 0; i < n; i++){ sc(a[i]); }

	sort(a, a + n);

	double ans(0);

	if (n2 > n1)	
	{
		ll temp = n1;
		ll sum(0);

		int i = n - 1;
		while (temp--)
			sum += a[i--];

		ans += sum / (n1 * 1.0);

		sum = 0;
		temp = n2;
		
		while (temp--)
			sum += a[i--];
		
		ans += sum / (n2 * 1.0);
	}

	else
	{
		ll temp = n2;
		ll sum(0);

		int i = n - 1;
		while (temp--)
			sum += a[i--];

		ans += sum / (n2 * 1.0);

		sum = 0;
		temp = n1;

		while (temp--)
			sum += a[i--];

		ans += sum / (n1 * 1.0);
	}

	printf("%.9f\n", ans);

	return 0;
}