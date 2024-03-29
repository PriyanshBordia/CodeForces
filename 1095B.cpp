#include <iostream>
#include <algorithm>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll n; cin >> n;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	sort(a, a + n);

	cout << min(a[n - 1] - a[1], a[n - 2] - a[0]) << endl;

	return 0;
}