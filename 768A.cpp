#include <iostream>
#include <algorithm>

#define sci(x) scanf("%d", &x);
#define pfi(x) printf("%d\n", x);

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++){ sci(a[i]); }

	sort(a, a + n);

	int countMin(0);
	int countMax(0);
	
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == a[0])
			countMin++;

		if (a[i] == a[n - 1])
			countMax++;
	}

	pfi(max(0, n - countMin - countMax));

	return 0;
}